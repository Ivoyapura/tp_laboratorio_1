/*
 * utn.funciones.h
 *
 *  Created on: 17 sep. 2021
 *      Author: drive
 */

#ifndef UTN_FUNCIONES_H_
#define UTN_FUNCIONES_H_
/**
 * @fn float sumarNumerosIngresados(float, float)
 * @brief  esta funcion suma los parámetros a y b.
 *
 * @param a es el primer operando que el usario va a ingresar
 * @param b es el segundo operando que el usuario va a ingresar
 * @return retorna el resultado de la suma de los 2 numeros ingresados
 */
float sumarNumerosIngresados(float a, float b);

/**
 * @fn float restarNumerosIngresados(float, float)
 * @brief  esta funcion resta los parámetros a y b.
 *
 * @param a el primer operando que el usario va a ingresar
 * @param b el segundo operando que el usuario va a ingresar
 * @return  retorna el resultado de la resta de los 2 numeros ingresados
 */
float restarNumerosIngresados(float a, float b);

/**
 * @fn float dividirNumerosIngresados(float, float)
 * @brief  esta funcion divide los parámetros a y b.
 *
 * @param a el primer operando que el usario va a ingresar
 * @param b el segundo operando que el usuario va a ingresar
 * @return retorna el resultado de la division de los 2 numeros ingresados
 */
float dividirNumerosIngresados(float a, float b);

/**
 * @fn float multiplicarNumerosIngresados(float, float)
 * @brief  esta funcion multiplica los parámetros a y b.
 *
 * @param a el primer operando que el usario va a ingresar
 * @param b el segundo operando que el usuario va a ingresar
 * @return retorna el resultado de la  multiplicación de los 2 numeros ingresados
 */
float multiplicarNumerosIngresados(float a, float b);

/**
 * @fn void limpiarConsola(void)
 * @brief esta funcion limpia la consola
 *
 */
void limpiarConsola(void);

/**
 * @fn int verificarEntero(float)
 * @brief  esta funcion verifica que el parametro ingresado sea un entero
 *
 * @param numero numero que ingreso el usuario
 * @return retorna 1 si es el numero es entero, 0 si no lo es.
 */
int verificarEntero(float numero);

/**
 * @fn int verificarPositivo(float)
 * @brief  esta funcion verifica si el numero ingresado es positivo para poder calcular el factorial
 *
 * @param numero es el numero que ingreso el usuario
 * @return retorna 1 si es positivo, 0 si no lo es.
 */
int verificarPositivo(float numero);

/**
 * @fn unsigned long int calcularFactorialEnteros(float)
 * @brief Esta funciona calcula el factorial del numero ingresado.
 *
 * @param numero
 * @return  retorna el factorial de numero ingresado.
 */
unsigned long int calcularFactorialEnteros(float numero);

/**
 * @fn int verificarSePuedeCalcularFactorial(float)
 * @brief Esta función  verifica que se cumplan las 2 condiciones que el numero sea entero y positivo.
 *
 * @param numero es el numero a verificar
 * @return retorna 1 si cumple las condiciones, 0 si no la cumple
 */
int verificarSePuedeCalcularFactorial(float numero);


#endif /* UTN_FUNCIONES_H_ */
