#ifndef HASHDUPLA_H 
#define HASHDUPLA_H

#include "funcoes.h"

typedef struct DataTable DataTable;
typedef struct HashTable HashTable;


struct DataTable{
	int key;
	int value;
};


struct HashTable{
	DataTable *table;
	int M;
	int colisoesD;
};


void Initialize(HashTable *h, int M);
void Imprime(HashTable *h);
void Insert(HashTable *h,int value);

#endif