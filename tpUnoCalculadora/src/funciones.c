#include <stdio.h>
#include <stdlib.h>

void menu()
{
	printf("\t1- Ingrese el primer operando:\n");
	printf("\t2- Ingrese el segundo operando:\n");
	printf("\t3- Calcular todas las operaciones:\n");
	printf("\t4- Informar resultados:\n");
	printf("\t5- Salir:\n");
}

/**
 * \brief Toma los dos numeros enteros recibidos como parametros
 *		y realiza la suma de los mismos
 * \param numeroUno recibe un numero entero
 * \param numeroDos recibe un segundo numero entero
 * \return Retorna un entero con el resultado de la operacion
 *
 */
int sumar(int numeroUno, int numeroDos)
{
	int resultado;
	resultado = numeroUno+numeroDos;
	return resultado;
}

/**
 * \brief Toma los dos numeros enteros recibidos como parametros
 *		y realiza la resta de los mismos
 * \param numeroUno recibe un numero entero
 * \param numeroDos recibe un segundo numero entero
 * \return Retorna un entero con el resultado de la operacion
 *
 */
int restar(int numeroUno, int numeroDos)
{
	int resultado;
	resultado = numeroUno-numeroDos;
	return resultado;
}

/**
 * \brief Toma los dos numeros enteros recibidos como parametros
 *		y realiza la multiplicacion de los mismos
 * \param numeroUno recibe un numero entero
 * \param numeroDos recibe un segundo numero entero
 * \return Retorna un entero con el resultado de la operacion
 *
 */
int multiplicar(int numeroUno, int numeroDos)
{
	int resultado;
	resultado = numeroUno*numeroDos;
	return resultado;
}

/**
 * \brief Toma los dos numeros enteros recibidos como parametros, verifica
 *		que el segundo no sea 0 recien ahi realiza la division de los mismos
 * \param numeroUno recibe un numero entero
 * \param numeroDos recibe un segundo numero entero
 * \return Retorna un entero con el resultado de la operacion
 *
 */
int dividir(float* resultado, int numeroUno, int numeroDos)
{
	int retorno = -1;
	if(numeroDos != 0)
	{
		*resultado = (float) numeroUno / numeroDos;
		retorno = 0;
	}

	return retorno;
}

/**
 * \brief Toma el numero entero recibido como parametro
 *		y realiza el factorial del mismo
 * \param numero recibe un numero entero
 * \return Retorna un entero con el resultado de la operacion
 *
 */
int factorial(int numero)
{
	int resultado;
	if(numero == 1)
	{
		return 1;
	}
	resultado = numero * factorial(numero-1);
	return resultado;
}
