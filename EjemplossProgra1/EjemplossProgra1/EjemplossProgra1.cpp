// EjemplossProgra1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


class Persona {
private:
    string nombre;
    int edad;
    char sexo;

public:
    Persona(string n, int e, char s) : nombre(n), edad(e), sexo(s) {}

    void saludar() {
        cout << "Hola, soy " << nombre << "y tengo " << edad << " anios";
    }
    void validar() {
        if (edad < 18)
        {
            cout << nombre << " es  menor de edad";
        }
        else
        {
            cout << nombre << " es  mayor de edad";
        }
    }

};





int main()
{
    Persona persona("Pablo", 18, 'M');
    persona.saludar();
    persona.validar();

}
