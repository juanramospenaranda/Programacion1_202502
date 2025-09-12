// SolExamen1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    float peso = 0;
    float estatura = 0;
    float imc = 0;

    string texto;
    std::cout << "Digite su peso\n";
    cin >> peso;

    std::cout << "Digite su estatura\n";
    cin >> estatura;


    ///Calculo de IMC
    imc = peso / (estatura * estatura);

    //Mostrar IMC
    std::cout << "Su IMC es: "<<imc<<endl;


    if (imc<18.5)
    {
        texto = "Segun su IMC , usted tiene Bajo Peso ";

        
    }
    else
    {
        if (imc<25)
        {
            texto = "Segun su IMC , usted tiene Peso Normal";
            
        }
        else
        {
            texto = "Segun su IMC , usted tiene Sobre Peso";
            
        }
    }

    std::cout <<texto <<endl;




}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
