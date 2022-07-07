#ifndef HASHFECHADA_H 
#define HASHFECHADA_H

#include "funcoes.h"

typedef struct DataTableC DataTableC;
typedef struct HashC HashC;

struct DataTableC{
	int key;
	int valores[20];
};

struct HashC{
	int M; /////tamanho da hash
	DataTableC *tableC; /////Hash
	int colisoesC; ////colisoes da hash
};


void InitializeC(HashC *h,int M);
void ImprimeC(HashC *h);
void InsertC(HashC *h,int value);

#endif