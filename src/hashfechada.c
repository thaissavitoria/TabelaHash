#include "hashfechada.h"

void InitializeC(HashC *h, int M){
	h->tableC = (DataTableC*) malloc (M * sizeof(DataTableC));
	h->M = M;

	for(int i=0; i<h->M; i++){
		h->tableC[i].key = -1;
		for(int j=0;j<h->M;j++)
		{
			h->tableC[i].valores[j]=-1;
		}
	}

	h->colisoesC=0;
}


void ImprimeC(HashC *h){

	printf("\n.................Imprimindo a Hash Fechada.................\n");
	for(int i=0; i<h->M; i++)
	{
		if(h->tableC[i].key!=-1)
		{
			printf("\n\nCHAVE:%d \n", h->tableC[i].key);
			printf("\n\tValores: \n");
			for(int j=0;j<h->M;j++)
			{
				if(h->tableC[i].valores[j]!=-1)
				{
					printf("\n\t-%d;",h->tableC[i].valores[j]);
				}
			}
		}
	}
}

void InsertC(HashC *h, int value){
	int key = funcaoHash1(value, h->M);
	int i;
	
	for(i=0;i<h->M;i++)
	{
		if(h->tableC[i].key == key)
		{
			for(int j=0;j<h->M;j++)
			{
				if(h->tableC[i].valores[j]==-1)
				{
					h->tableC[i].valores[j]=value;
					if(j>0)
						h->colisoesC++;
					return;
				}
			}
		}
	}

	for(i=0;i<h->M;i++)
	{
		if(h->tableC[i].key == -1)
		{
			h->tableC[i].key=key;
			h->tableC[i].valores[0]=value;
			return;
		}
	}

	printf("A Hash está cheia!\n");
}