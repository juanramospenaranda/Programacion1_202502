#include "ListaDoble.h"
#include <iostream>
using namespace std;


ListaDoble::ListaDoble(): head(nullptr)
{
}

void ListaDoble::Buscar(int valor)
{
	int posicion = 1;
	NodoDoble* actual = head;
	while (actual != nullptr)
	{
		if (actual->dato == valor)
		{
			cout << "EL dato se encuentra en el nodo:" << posicion << endl;
		}
		//cout << actual->dato << endl;
		actual = actual->siguiente;
		posicion++;
	}
	cout << "FINAL DE LA LISTA" << endl;
}

void ListaDoble::Eliminar(int valor)
{
	NodoDoble* actual = head;
	NodoDoble* anterior = nullptr;
	NodoDoble* siguiente = nullptr;


	while (actual != nullptr)
	{ 

	if (actual->dato==valor)
	{
		///Lógica para eliminar el nodo
		if (actual->anterior!=nullptr)
		{
			anterior = actual->anterior;
			siguiente = actual->siguiente;
			anterior->siguiente = siguiente;
			if (siguiente!=nullptr)
			{
				siguiente->anterior=anterior;
			}
		}
		else
		{
			//ELIMINAR EL PRIMER NODO
			head = actual->siguiente;
			head->anterior = nullptr;
		}
	}

	
	actual = actual->siguiente;
	}
}

void ListaDoble::Insertar(int valor) {
	NodoDoble* nuevo = new NodoDoble(valor);
	if (head!=nullptr)//LISTA CONTIENE ELEMENTOS
	{
		head->anterior = nuevo;
		nuevo->siguiente = head;
	}

	head = nuevo;

}

#pragma region Metodo Mostrar
void ListaDoble::Mostrar() {
	NodoDoble* actual = head;
	while (actual != nullptr)
	{
		cout << actual->dato<<"<---> ";
		/*cout << "Direc actual" << actual << " ";
		cout << "Direc anterior" << actual->anterior << " ";
		cout << "Direc siguiente" << actual->siguiente << " ";
		cout << endl;*/
		actual = actual->siguiente;
	}


}
#pragma endregion

