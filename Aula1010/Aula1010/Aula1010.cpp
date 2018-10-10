// Aula1010.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void HelloWorld()


{
	
	printf("\t\t\t\t\t\t\tHello World!\n");                /* BARRA T É PARA DAR ESPAÇO*/
}
int Soma2Valores(int a, int b)
{
			/*int c;
	c = a + b;
	return c;*/
	return a + b;
}
int LerValorInteiro()
{
	int variavel;
	printf("\nFavor digitar um numero inteiro:");
	scanf_s("%i", &variavel);
	return variavel;
}

int main()
{


	HelloWorld();
	int primeiroValor = LerValorInteiro();
	int segundovalor = LerValorInteiro();
	
	int d = Soma2Valores(99, 1);
	printf("\t\t\t\t\t\tResultado:%i\n", d);


	system("pause");
    return 0;
}

