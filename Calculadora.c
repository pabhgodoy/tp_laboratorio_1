#include<stdio.h>
#include<stdlib.h>
#include "Funcion.h"

int main()
{
	char seguir='s';
	int opcion,A=0,B=0;
	double dividir;
	//int sumar,restar,multiplicar,dividir;
	do
	{
		printf("\nIngrese una opcion:\n\n");
		printf("1- Ingresar 1er operando (A= %d)\n",A);
        printf("2- Ingresar 2do operando (B= %d)\n",B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        
		scanf("%d",&opcion);
		while(opcion<1 || opcion>9)
		{
			printf("ERROR,reingrese una opcion valida");
			scanf("%d",&opcion);
		}
		switch(opcion)
		{
			case 1:
				system("cls");
				scanf("%d",&A);
				break;
			case 2:
				system("cls");
				scanf("%d",&B);
				break;
			case 3:
				system("cls");
				printf("Resultado de la SUMA es: %d\n",suma(A,B));
				//sumar=suma(A,B);
				break;
			case 4:
				system("cls");
				printf("Resultado de la RESTA es: %d\n",resta(A,B));
				//restar=resta(A,B);
				break;
			case 5:
				system("cls");
				printf("Resultado de la MULTIPLICACION es: %d\n",multiplicacion(A,B));
				//multiplicar=multiplicacion(A,B);
				break;
			case 6:
				system("cls");
				//dividir=divicion(A,B);
				printf("Resultado de la DIVICION es: %.2f\n",divicion(A,B));
				break;
			case 7:
				system("cls");
				printf("El FACTORIAL de A es %d",factorial(A));
				break;
			case 8:
				system("cls");
				printf("A=%d\nB=%d\n",A,B);
				printf("Resultado de la SUMA es: %d\n",suma(A,B));
				printf("Resultado de la RESTA es: %d\n",resta(A,B));
				printf("Resultado de la MULTIPLICACION es: %d\n",multiplicacion(A,B));
				printf("Resultado de la DIVICION es: %.2f\n",divicion(A,B));
				printf("El FACTORIAL de A es %d",factorial(A));
				break;
			case 9:
				system("cls");
				seguir='n';
				break;
		}
	}while(seguir=='s');
	printf("\n\n");
	system("pause");
	return 0;
}
