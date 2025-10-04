#include "ListaEnlazada.h"
#include <iostream>
using namespace std;

ListaEnlazada::ListaEnlazada()
{
	cabeza = nullptr;
}

void ListaEnlazada::Insertar(int valor)
{
	Nodo* nuevo = new Nodo(valor);
	nuevo->siguiente = cabeza;
	cabeza = nuevo;

}

void ListaEnlazada::Mostrar() {

	Nodo* actual = cabeza;
	while (actual!=nullptr)
	{
		cout << actual->dato << endl;
		actual = actual->siguiente;
	}
	cout << "FINAL DE LA LISTA" << endl;
}

