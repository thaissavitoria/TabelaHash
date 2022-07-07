#include "hashdupla.h"

void Initialize(HashTable *h, int M){
	h->table = (DataTable*) malloc (M * sizeof(DataTable));

	for(int i=0; i<M; i++){
		h->table[i].key   = -1;
		h->table[i].value = 0;
	}

	h->M = M;
	h->colisoesD=0;
}


void Imprime(HashTable *h){

	printf("\n.................Imprimindo a Hash Dupla.................\n");
	for(int i=0; i<h->M; i++)
	{
		if(h->table[i].key!=-1)
			printf("\nCHAVE:%d - VALOR:%d\n", h->table[i].key, h->table[i].value);
	}
}

void Insert(HashTable *h, int value){
	int idx = funcaoHash1(value, h->M);
	int aux = idx;
	
	while (h->table[idx].key != -1){
		h->colisoesD++;
		idx = (idx + 1) % h->M;
		if (idx == aux){
			printf("A Hash está cheia!\n");
			return;
		}
	}
		
	int key=idx;

	h->table[idx].key   = key;
	h->table[idx].value = value;
}