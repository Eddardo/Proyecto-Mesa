//Ingenieria en computacion inteligente 1 semestre
//Lenguaje de programacion
//objetivo:Hacer una claculadora funcional 
//Datos de entrada:Numeros enteros y flotantes
//Proceso:Despues de meter un numero Elijes la opcion la cual quieres que se realize en el menu
//Datos de salida:Resultado de la operacion que se quizo realizar
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//Esta calculadora esta en fase de desarrollo asi que las funciones que contiene son muy simples 
int main()
{
	
		system("color 5f");
	int b=0;
	int c=0;
	float resultado;
	int a=0;
	int y=0;
	float resultado;
  	
	do
	{
		
	printf("");
	scanf("%d",&b);
	//Este espacio es para elejir la operacion que se desaea realizar "+","-","*","/"
	printf("Esta calculadora esta en desarrollo asi que\n Al teclear 1==*\n Al teclear 2== +\n Al teclear 3==/\n Al teclear 4==-\n");
	printf("");
	scanf("%d",&a);
	printf("");
	scanf("%d",&c);
	
	switch(a)
	{
		case 1:
			resultado=b*c;
			printf("%f",resultado);
			break;
		case 2:
			resultado=b+c;
			printf("%f",resultado);
			break;
		case 3:
			resultado=b/c;
			printf("%f",resultado);
			break;
		case 4:
			resultado=b-c;
			printf("%f",resultado);
			break;
	
	} 
		printf("\nOtra operacion precione 1");
		scanf("%d",&y);
		system("cls");
	}while (y==1);
	
	
	getch();
}

