#include "funcoes.h"
int calculaTamanhoHashDupla(int tamvetor)
{
	int dobro=2*tamvetor;
	int cont=0;

	do{
		cont=calculaDivisoes(dobro);
		if(cont!=2)
			dobro++;
	}while (cont!=2);

	return dobro;
}

int calculaDivisoes(int num)
{
	int cont=0;

	for(int i=1;i<=num;i++)
	{
		if((num%i)==0)
		{
			cont++;
		}
	}

	return cont;
}

int funcaoHash1(int valor,int tamHash)
{
	return (valor%tamHash);
}
