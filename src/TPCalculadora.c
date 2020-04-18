/*
 ============================================================================
 Name        : TPCalculadora.c
 Author      : Bruno Gonzalez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 1.Ingresar 1er operando (A=x)
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
2
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "operacionesBasicas.h"

//No encontré forma posible de limpiar el buffer, así que inicie num1 y num2* en 0.
int main(void)
{
	setbuf(stdout,NULL);
	int opcion;
	int num1=0;
	int num2=0;
	int sumar;
	int restar;
	float dividir;
	int multiplicar;
	int factorial1;
	int factorial2;

	do
	{
		printf("1-Ingresar 1er operando. (valor actual %d)\nIngresar 2do operando. (valor actual %d)\n3-Calcular todas las operaciones\n4-Informar resultados.\n5-Salir.\n",num1,num2);
		scanf("\n\n%d",&opcion);
		switch(opcion)
		{
		case 1:
		num1=getInt();
			break;
		case 2:
		num2=getInt();
			break;
		case 3:
			if((num1&&num2)!=0)
			{
				sumar=sumarNum(num1,num2);
				restar=restarNum(num1,num2);
				dividir=dividirNum(num1,num2);
				multiplicar=multiplicarNum(num1,num2);
				factorial1=factorialNum(num1);
				factorial2=factorialNum(num2);
			}else
			{
				puts("Alguno de los valores es 0, vuelva a ingresar los operandos.");
			}
			break;
		case 4:
			printf("El resultado de la suma es:%d\nEl resultado de la resta es:%d\nEl resultado de la multiplicacion es:%d\nEl resultado de la division es:%.2f\nEl factorial del operando 1 es:%d\nEl factorial del operando 2 es:%d\n",sumar,restar,multiplicar,dividir,factorial1,factorial2);
			break;
		case 5:
			break;
		default:
			puts("Ingrese una opción valida (1, 2, 3, 4, 5)");
			break;
		}
		puts("\n");
	}while(opcion!=5);
	return EXIT_SUCCESS;
}

