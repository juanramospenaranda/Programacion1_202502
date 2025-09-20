#pragma once
#include "Persona.h"
class Estudiante : public Persona
{
protected :
	string Carnet;
	string Carrera;

public:
	Estudiante(string nombre, string cedula, int edad,string carnet, string carrera);
	void Mostrar();

};

