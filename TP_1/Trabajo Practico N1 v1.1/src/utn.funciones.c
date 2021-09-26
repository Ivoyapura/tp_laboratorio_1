/*
 * utn.funciones.c
 *
 *  Created on: 17 sep. 2021
 *      Author: drive
 */
#include <stdio.h>
#include <stdlib.h>

float sumarNumerosIngresados(float a, float b)
{
	float resultadoSuma;

	resultadoSuma= a+b;

	return resultadoSuma;
}

float restarNumerosIngresados(float a, float b)
{
	float resultadoResta;

	resultadoResta= a-b;

	return resultadoResta;
}

float dividirNumerosIngresados(float a, float b)
{
	float resultadoDivision;

	resultadoDivision= a/b;

	return resultadoDivision;
}

float multiplicarNumerosIngresados(float a, float b)
{
	float resultadoMultiplicacion;

	resultadoMultiplicacion= a*b;

	return resultadoMultiplicacion;
}

void limpiarConsola(void)
{
	printf("\n\n\n\n\n");
}



int verificarPositivo(float numero)
{
    int valor=0;

    if(numero>0)
    {
        valor=1;
    }
    return valor;
}

int verificarEntero(float numero)
{
    int valor=0;

    if((int)numero-numero==0)
    {
        valor=1;
    }
    return valor;
}

int verificarSePuedeCalcularFactorial(float numero)
{
    int valor=0;

    if(verificarPositivo(numero)==1 && verificarEntero(numero)==1)
    {
        valor=1;
    }

    return valor;
}

unsigned long int calcularFactorialEnteros(float numero)
{
	unsigned long int factorial=1;

    if( numero!=1 && numero!=0)
    {
        factorial=numero*calcularFactorialEnteros(numero-1);
    }
    return factorial;
}
