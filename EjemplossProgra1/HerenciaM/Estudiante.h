#pragma once
#include "Persona.h"
#include "Carnet.h"
class Estudiante : public Persona
{
protected :
	Carnet pCarnet;
	string Carrera;

public:
	Estudiante(string nombre, string cedula, int edad,Carnet carnet, string carrera);
	Estudiante();
	void Mostrar();
	Estudiante GetEstudiante(string nombre, string cedula, int edad, Carnet carnet, string carrera);
	void SolicitarDatos();
};

