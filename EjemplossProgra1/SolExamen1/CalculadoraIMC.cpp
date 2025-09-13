#include "CalculadoraIMC.h"

#include <iostream>
using namespace std;


float imc;
string texto;
void CalculadoraIMC::Calcular(float peso, float estatura)
{
	imc = peso / (estatura * estatura);

}

void CalculadoraIMC::MostrarTexto(float pimc)
{

    if (pimc < 18.5)
    {
        texto = "Segun su IMC , usted tiene Bajo Peso ";


    }
    else
    {
        if (pimc < 25)
        {
            texto = "Segun su IMC , usted tiene Peso Normal";

        }
        else
        {
            texto = "Segun su IMC , usted tiene Sobre Peso";

        }
    }
    std::cout << texto << endl;
}
