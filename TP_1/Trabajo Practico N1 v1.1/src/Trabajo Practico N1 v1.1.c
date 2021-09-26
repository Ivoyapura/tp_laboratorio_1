/* Ivo Yapura
 * Div D
 ============================================================================
1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.funciones.h"
#define LIMITE_FACTORIAL  13

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	float a;
	float b;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	unsigned long int resultadoFactorialA;
	unsigned long int resultadoFactorialB;

	printf("**************************************");
	printf("\nBienvenidos a la  calculadora T-800. ");
	printf("\n**************************************");

	do
	{	printf("\n***************************************");
		printf("\nMenú de opciones.");
		printf("\n---------------------------------------");
		printf("\n1.Ingresar 1er operando.");
		printf("\n2.Ingresar 2do operando.");
		printf("\n3.Calculo de todas las operaciones");
		printf("\n4.Informe de resultados.");
		printf("\n5.Salir.");
		printf("\n**************************************");
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:
			printf("\nIngrese el primer operando: ");
			fflush(stdin);
			scanf("%f", &a);
			break;
		case 2:
			printf("\nIngrese el segundo operando: ");
			fflush(stdin);
			scanf("%f", &b);
			break;
		case 3:
			resultadoSuma = sumarNumerosIngresados(a, b);
			resultadoResta = restarNumerosIngresados(a, b);
			if(b!=0)
			{
				resultadoDivision = dividirNumerosIngresados(a, b);
			}
			resultadoMultiplicacion = multiplicarNumerosIngresados(a, b);
			if(verificarSePuedeCalcularFactorial(a)&& a<LIMITE_FACTORIAL)
			{
				resultadoFactorialA=calcularFactorialEnteros(a);
			}

			if(verificarSePuedeCalcularFactorial(b)&& b <LIMITE_FACTORIAL)
			{
				resultadoFactorialB=calcularFactorialEnteros(b);
			}
			break;
		case 4:
			printf("\na)El resultado de %.2f+%.2f es: %.2f", a, b, resultadoSuma);
			printf("\nb)El resultado de %.2f-%.2f es : %.2f", a, b, resultadoResta);
			if(b!=0)
			{
				printf("\nc)El resultado de %.2f/%.2f es: %.2f", a, b, resultadoDivision);
			}
			else
			{
				printf("\nc)El resultado de %.2f/%.2f es: incalculable por que es imposible dividir por 0 .", a, b);
			}

			printf("\nd)El resultado de %.2f*%.2f es: %.2f", a, b, resultadoMultiplicacion);

			if(verificarSePuedeCalcularFactorial(a) &&  a<LIMITE_FACTORIAL)
			{
				printf("\ne)El factorial de A %.2f es : %lu y  ", a, resultadoFactorialA);
			}
			else
			{
				printf("No se puede calcular el factorial de A. Verifique que sea positivo, entero y menor que %d y ", LIMITE_FACTORIAL);
			}
			if(verificarSePuedeCalcularFactorial(b) &&  b<LIMITE_FACTORIAL)
			{
				printf("\ne)el factorial de B %.2f es : %lu .\n  ", b, resultadoFactorialB);
			}
			else
			{
				printf("No se puede calcular el factorial de B. Verifique que sea positivo, entero y menor que %d .", LIMITE_FACTORIAL);
			}
			break;
		case 5:
			printf("Fin del programa. :V");
			break;
		default:
			printf("ERROR. Ingrese una opción válida.\n");
			break;
		}

		if(opcion!=5)
		{
			system("pause");
			limpiarConsola();
		}
	}while(opcion!=5);
	return EXIT_SUCCESS;
}
