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
#include <stdlib.h>

int   Get_Int(char texto[], char error[], int minimo, int maximo);
float Get_Float (char texto[], char error[], int minimo, int maximo);
float SumarDosNumeros (float numero1, float numero2);
float RestarDosNumeros (float numero1, float numero2);
float MultiplicarDosNumeros (float numero1, float numero2);
float DividirDosNumeros (float numero1, float numero2);


int main(void)
{
	int opciones;
	int flagVariable1;
	int flagVariable2;
	int flagMenu;
	float variable1;
	float variable2;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	//long int resultadoFactorial1;
	//long int resultadoFactorial2;
	flagVariable1=0;
	flagVariable2=0;

	do
	{
		if(flagMenu==0)
		{
		printf("\n         ----------\n");
		printf("----------------------------\n");

		printf("¡Bienvenidos a la calculadora!\n");

		printf("----------------------------\n");
		printf("         ----------\n");
		}

		printf("\n Menu principal.\n");
		//Primera variable.
		if(flagVariable1==0)
		{
			printf("\n1.Ingrese el primer operando (A=x).\n");
		}
		else
		{
			printf("1.El primer operando ingresado es: (A = %.2f)\n",variable1);

		}

		//Segunda variable.

		if(flagVariable2==0)
		{
			printf("2.Ingrese el segundo operando (B=y).\n");
		}
		else
		{
			printf("2.El segundo operando ingresado es: (B = %.2f)\n",variable2);
		}

		printf("3.Calcular todas las operaciones.\n");
			//printf("	a)Calcular la suma (A+B).\n");
			//printf("	b)Calcular la resta (A-B).\n");
			//printf("	c)Calcular la division (A/B).\n");
			//printf("	d)Calcular la multiplicacion(A/B).\n");
			//printf("	e)Calcular el factorial (A!).\n");
		printf("4.Informe de resultados.\n");
			//printf("	a)El resultado de A+B es:r.\n");
			//printf("	b)El resultado de A-B es:r.\n");
			//printf("	c)El resultado de A/B es:r. o No es posible dividir por cero.\n");
			//printf("	d)El resultado de A*B es:r.\n");
			//printf("	e)El factorial de A es: r1 y el factorial de B es r2.\n");
		printf("5.Salir.\n");

		opciones= Get_Int("\nIngrese una opcion (1-5): ","ERROR. Reingrese una opcion (1-5):",1,5);

		//printf("\nIngrese una opcion: ");
		//scanf("%d",&opciones);

		//pedir entero

		switch(opciones)
		{
		case 1:
			 //system("clear");
			 variable1 = Get_Float ("Ingrese el primer operando:","Error, reingrese el numero", -10000, 10000);
			 flagVariable1++;
			 printf("La variable cargada %.2f\n", variable1);
			 //funcion asignacion primer operando.
			//Ingresar primer numero
			 flagMenu++;
			 break;
		case 2:
			flagMenu++;
			if(flagVariable1==0)
			{
				printf("ERROR.Debe ingresar el primer operando (opcion 1).\n");
				break;
			}
			variable2 = Get_Float("Ingrese el segundo operando:","Error, reingrese el numero", -10000, 10000);
			flagVariable2++;
			//printf("Caso2.\n");
			//funcion asignacion primer operando.
			//Ingresar primer numero
			break;
		case 3:
			flagMenu++;
			if(flagVariable1==0 && flagVariable2==0)
			{
				printf("\nERROR. Primero debe ingresar ambos operandos (opcion 1-opcion2).");
				break;
			}
			else
			{
				if(flagVariable1==0)
				{
					printf("\nERROR. Debe ingresar el primer operando (opcion 1).");
					break;
				}
				if(flagVariable2==0)
				{
					printf("\nERROR. Debe ingresar el primer segundo operando (opcion 2).");
					break;
				}
			}

			printf("Todas las operaciones han sido calculadas.\n");
			//Llamar a todas las funciones
			resultadoSuma=SumarDosNumeros(variable1,variable2);
			resultadoResta=RestarDosNumeros(variable1,variable2);
			resultadoDivision=DividirDosNumeros(variable1, variable2);
			resultadoMultiplicacion=MultiplicarDosNumeros(variable1, variable2);
			//resultadoFactorial1
			//resultadoFactorial1
			break;
		case 4:
			if(flagVariable1==0 && flagVariable2==0)
			{
				printf("\nERROR. Primero debe ingresar ambos operandos (opcion 1-opcion2).");
				break;
			}
			else
			{
				//if()
			}
			printf("El resultado de %.2f + %.2f es: %.2f.\n",variable1,variable2,resultadoSuma);
			printf("El resultado de %.2f - %.2f es: %.2f.\n",variable1,variable2,resultadoResta);
			if(variable2!=0)
			{
				printf("El resultado de %.2f / %.2f es: %.2f.\n",variable1,variable2,resultadoDivision);
			}
			else
			{
				printf("La division por cero no esta definida.\n");
			}
			printf("El resultado de %.2f * %.2f es: %.2f.\n",variable1,variable2,resultadoMultiplicacion);
			//printf("El resultado de %.2f + %.2f es: %.2f.\n",variable1,variable2,resultadoFactorial1);
			//printf("El resultado de %.2f + %.2f es: %.2f.\n",variable1,variable2,resultadoFactorial2);
			break;
			flagMenu++;
		}




	}while(opciones !=5);



	return EXIT_SUCCESS;
}

int Get_Int (char texto[], char error[], int minimo, int maximo)
{
	int numeroIngresado;
	printf("%s",texto);
	scanf("%d",&numeroIngresado);

	while(numeroIngresado<minimo || numeroIngresado>maximo)
	{
		printf("%s",error);
		scanf("%d",&numeroIngresado);
	}

	return numeroIngresado;
}

float Get_Float (char texto[], char error[], int minimo, int maximo)
{
	float numeroIngresado;
	//float resultado;

	printf("%s",texto);
	scanf("%f",&numeroIngresado);

	while(numeroIngresado<minimo || numeroIngresado>maximo)
	{
		printf("%s",error);
		scanf("%f",&numeroIngresado);
	}

	return numeroIngresado;

}

float SumarDosNumeros (float numero1, float numero2)
{
	float resultado;

	resultado = numero1+numero2;

	return resultado;
}

float RestarDosNumeros (float numero1, float numero2)
{
	float resultado;

	resultado= numero1-numero2;

	return resultado;
}

float MultiplicarDosNumeros (float numero1, float numero2)
{
	float resultado;

	resultado= numero1*numero2;

	return resultado;

}

float DividirDosNumeros (float numero1, float numero2)
{
	float resultado;

	resultado =numero1/numero2;

	return resultado;

}
