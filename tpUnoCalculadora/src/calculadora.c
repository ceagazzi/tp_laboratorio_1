#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(void) {

	int opcion;
	int operandoUno;
	int operandoDos;
	int sumaResultado;
	int restaResultado;
	int multiplicacionResultado;
	int flagCase = 0;
	float divisionResultado;
	int exitoDivision;
	int factorialOperandoUno;
	int factorialOperandoDos;

	printf("\t\t\tCALCULADORA +-/*\t\t\t\n\n");

	while(opcion!=5)
	{
	menu();
	printf("Ingrese una opcion:\n");
	scanf("%d", &opcion);

	switch(opcion){

	case 1:
		printf("Ingrese el primer operando: \n");
		scanf("%d", &operandoUno);
		flagCase = 1;
		break;

	case 2:
		if(flagCase == 1){
			printf("Ingrese el segundo operando: \n");
			scanf("%d", &operandoDos);
			flagCase = 2;
		}
		else
		printf("Se debe ingresar el primer operando: \n");
		break;

	case 3:
		if(flagCase == 2){
			printf("Calculando todas las operaciones\n");
			sumaResultado = sumar(operandoUno, operandoDos);
			restaResultado = restar(operandoUno, operandoDos);
			multiplicacionResultado = multiplicar(operandoUno, operandoDos);
			exitoDivision = dividir(&divisionResultado, operandoUno, operandoDos);
			factorialOperandoUno = factorial(operandoUno);
			factorialOperandoDos = factorial(operandoDos);
			flagCase = 3;
		}
		else
		printf("Primero deben ingresarse los operandos\n");
		break;

	case 4:
		if(flagCase == 3){
			printf("Los resultados son:\n");
			printf("\tLa suma: %d\n", sumaResultado);
			printf("\tLa resta: %d\n", restaResultado);
			printf("\tLa multiplicacion: %d\n", multiplicacionResultado);
			if(exitoDivision==-1){
				printf("No es posible dividir por 0\n");
			}
			else
			printf("\tLa division: %.2f\n", divisionResultado);
			printf("\tEl primer factorial: %d\n", factorialOperandoUno);
			printf("\tEl segundo factorial: %d\n\n", factorialOperandoDos);
		}
		else
		printf("Deben calcularse los resultados antes de mostrarse\n");
		break;

	case 5:
		system("exit");
		break;

	default:

		printf("Elija una opcion valida!\n");

	}
}

	return EXIT_SUCCESS;
}
