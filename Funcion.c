#include<stdio.h>
#include<stdlib.h>
#include "Funcion.h"

int suma(int x,int y)
{
	return x+y;
}
int resta(int x,int y)
{
	return x-y;
}
int multiplicacion(int x,int y)
{
	return x*y;
}
double divicion(int x,int y)
{
	double resultado=0;
	if(y==0)
	{
		printf("No se puede dividir por cero\n");
	}else
	{
		resultado=(double)x/(double)y;
		return resultado;
	}
	return 0;
}
int factorial(int x)
{
	if(x==1||x==0)
	{
		return 1;
	}else
	{
		return x*factorial(x-1);
	}
}
