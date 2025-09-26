#include "Estudiante.h"



Estudiante::Estudiante(string nombre, string cedula, int edad, string carnet, string carrera):
	                          Persona(nombre,cedula,edad),Carnet(carnet),Carrera(carrera)
{
}

void Estudiante::Mostrar() {
	cout << "Nombre del Estudiante :" << Nombre<<endl;
	cout << "Carnet:" << Carnet << endl;
}