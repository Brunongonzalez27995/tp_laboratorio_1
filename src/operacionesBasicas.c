/*
 * operacionesBasicas.c
 *
 *  Created on: Apr 12, 2020
 *      Author: Bruno Gonzalez
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int getInt(void)
{
	int num;
	printf("Ingrese un numero\n");
	fflush(stdin);
	scanf("%d",&num);
	return num;
}
int sumarNum(int num1,int num2)
{
	int suma;
	suma=num1+num2;
	return suma;
}
int restarNum(int num1,int num2)
{
	int restar;
	restar=num1-num2;
	return restar;
}
int multiplicarNum(int num1,int num2)
{
	int multiplicar;
	multiplicar=num1*num2;
	return multiplicar;
}
float dividirNum(int num1,int num2)
{
	float dividir;
	dividir=((float)(num1))/(num2);
	return dividir;
}
int factorialNum(int num)
{
	int factorialAcumulador;
	factorialAcumulador=1;
	for(int i=num;i>0;i--)
	{
		factorialAcumulador=factorialAcumulador*i;
	}
	return factorialAcumulador;
}

