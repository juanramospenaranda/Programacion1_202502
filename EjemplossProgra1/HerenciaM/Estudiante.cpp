#include "Estudiante.h"



Estudiante::Estudiante(string nombre, string cedula, int edad, Carnet carnet, string carrera):
	                          Persona(nombre,cedula,edad),pCarnet(carnet), Carrera(carrera)
{
	
}

Estudiante::Estudiante()
{
}

void Estudiante::Mostrar() {
	cout << "Nombre del Estudiante :" << Nombre<<endl;
	cout << "Carnet:" << pCarnet.Numero << endl;
}

Estudiante Estudiante::GetEstudiante(string nombre, string cedula, int edad, Carnet carnet, string carrera)
{

	Estudiante est( nombre,  cedula,  edad,  carnet,  carrera);

	return est;
}

Estudiante Estudiante::SolicitarDatos()
{
    string nombre;
    string cedula;
    int edad;
    string carnet;
    string carrera;
    cout << "Digite el Nombre del Estudiante" << endl;
    cin >> nombre;
    cout << "Digite la Cédula del Estudiante" << endl;
    cin >> cedula;
    cout << "Digite la Edad del Estudiante" << endl;
    cin >> edad;
    cout << "Digite el Carnet del Estudiante" << endl;
    cin >> carnet;
    Carnet objCarnet;
    objCarnet.Numero = carnet;

    cout << "Digite la carrera del Estudiante" << endl;
    cin >> carrera;

    Estudiante estudiante(nombre, cedula, edad, objCarnet, carrera);

    estudiante.Mostrar();
    return estudiante;
    
}
