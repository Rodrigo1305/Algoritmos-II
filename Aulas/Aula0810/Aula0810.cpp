// Aula0810.cpp : Defines the entry point for the console application.
//


/* comentario longo , bloco 
(mais de uma linha ) local para fazer comentarios longos

*/


#include "stdafx.h"             // inclusão de biblioteca // sempre nomear as variaveis... que colocar
// C ANSI 
#include <stdio.h>  
#include <stdlib.h>           // STD = standart bibliteca padrão

// VARIAVEIS IMPORTANTES ( GLOBAIS , VISIVEIS EM TODO CÓDIGO )
int a;      // inteiro  numeros reais sem virgula ou ponto
float b;    // real ( ponto fluente) numeros com vigulas  padrão Americano utilizar ( Ponto . )      
double c;   // real ( maior precisão) 
bool d;     // booleano ( verdadeiro / falso ) ( true/false)



int main() // função obrigatório nunca apagar
{
	// variavel local ( visivel somente nesta função, a partir desta linha)
	int e; 
    
	// ( \n pula linha )
	// ( \t tabulação (TAB) )

	printf("hello world!\n\n\n");
	
	printf("a\t\tb\t\tc\n");
	printf("a\t\tb\t\tc\n");
	printf("a\t\tb\t\tc\n");


	// como imprimir valores
	printf("%i\n", 99); // para exibir valor tem que ter a porcentagem
	printf("%f\n", 100.1);

	// texto ( string) e valores juntos
	printf(" Aqui vai o valor %i, total da soma.\n ", 98 + 5);
	printf("%i + %i =%i\n", 500, 600, 500 + 600);

	printf("Por algum caso esqueci o valor daqui %i\n");
	 
	a = 150;
	e = 275;

	int f = a + e;
	
	printf("O resultado da soma eh: %i\n",f);

	// leitura scanF / scanF_S
	
	scanf_s("%i",  &f);

	printf("\nvoce digitou %i\n", f);  // verificação

	printf("Digite um valor real (float):");

	scanf_s("%f", &b);

	printf("\nvoce digitou %i\n", b);
	
	
	system("pause");
	
	return 0;
}

