/*
 ============================================================================
 Name        : Trabajo_Practico_1.c
  Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include "Tp1.h"

int main(void)
{
	//Declaracion de variables.
	int opciones;
	int flagVariable1;
	int flagVariable2;
	int flagVariable3;
	float variable1;
	float variable2;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	long long int resultadoFactorial1;
	long long int resultadoFactorial2;
	int resultadoValidacionFlags;
	int resultadoValidacionFlags2;
	//Asignacion flags.
	flagVariable1=0;
	flagVariable2=0;
	flagVariable3=0;

	printf("\n         ----------\n");
	printf("----------------------------\n");
	printf("¡Bienvenidos a la calculadora!\n");
	printf("----------------------------\n");
	printf("         ----------\n");

	do
	{
		MuestraMenu(flagVariable1, flagVariable2, variable1, variable2);
		opciones= Pedir_Entero_Rango("\nIngrese una opcion (1-5): ","ERROR. Reingrese solamente un numero (1-5):",1,5,"Error de rango. Reingrese");

		switch(opciones)
		{
		case 1:
			 variable1 = Pedir_Float("\nIngrese el primer operando:","Error, reingrese un numero:");
			 flagVariable1++;
			 break;
		case 2:
			//Validacion opciones.
			if(flagVariable1==0)
			{
				printf("ERROR.Debe ingresar el primer operando (opcion 1).\n");
				break;
			}
			variable2 = Pedir_Float("\nIngrese el segundo operando:","Error, reingrese un numero:");
			flagVariable2++;
			break;
		case 3:
			resultadoValidacionFlags=Valida_AccesoCalculos(flagVariable1,flagVariable2,"\nERROR. Primero debe ingresar ambos operandos (opcion 1-opcion2).","\nERROR. Debe ingresar el segundo operando (opcion 2).");
			if(resultadoValidacionFlags==0)
			{
				break;
			}
			printf("Todas las operaciones han sido calculadas.\n");
			//Llamada a todas las funciones que realizan operaciones.
			resultadoSuma=SumarDosNumeros(variable1,variable2);
			resultadoResta=RestarDosNumeros(variable1,variable2);
			resultadoDivision=DividirDosNumeros(variable1, variable2);
			resultadoMultiplicacion=MultiplicarDosNumeros(variable1, variable2);
			resultadoFactorial1=FactorearNumero(variable1);
			resultadoFactorial2=FactorearNumero(variable2);
			flagVariable3++;
			break;
		case 4:
			//Validacion opciones.
			resultadoValidacionFlags2=Valida_AccesoInforme(flagVariable1, flagVariable2, flagVariable3,"\nERROR. Primero debe ingresar ambos operandos (opcion 1-opcion2), y despues calcular (opcion3).","\nERROR. Debe ingresar el segundo operando (opcion2), y despues calcular (opcion3).","\nERROR. Se debe calcular todas las operaciones antes de mostrar los resultados (opcion 3).");
			if(resultadoValidacionFlags2==0)
			{
				break;
			}
			MuestraInformesResultados(variable1, variable2, resultadoSuma, resultadoResta, resultadoDivision, resultadoMultiplicacion, resultadoFactorial1, resultadoFactorial2);
			break;
		}
	}while(opciones !=5);
	printf("Ha salido exitosamente de la calculadora.");
	return EXIT_SUCCESS;
}


