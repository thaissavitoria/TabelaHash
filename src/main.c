#include "hashdupla.h"
#include "hashfechada.h"
#define tamvetor 20

int main(){
    int M;
    int vet[tamvetor];
    srand(time(NULL));


    /////gerando o vetor
    printf("\n...........Imprimindo o vetor............\n");
	for(int i=0;i<tamvetor;i++)
    {
        vet[i]=rand()%99;
        printf("\t%02d - %d\n",i+1,vet[i]);
    }

    ///Hash Endereçamento Externo
    HashC hc;

    InitializeC(&hc,tamvetor);

    printf("\n...........Inserindo na Hash Fechada............\n");

    for(int i=0;i<tamvetor;i++)
    {
        InsertC(&hc, vet[i]);
    }

    ImprimeC(&hc);


    /////Hash Dupla
    M=calculaTamanhoHashDupla(tamvetor);

    HashTable h;
    Initialize(&h, M);

    for(int i=0;i<tamvetor;i++)
    {
        Insert(&h, vet[i]);
    }

    Imprime(&h);


    printf("\n\nO número de colisões da Hash Fechada é de %d.\n",hc.colisoesC);
    printf("\n\nO número de colisões da Hash Dupla é de %d.\n",h.colisoesD);

    return 0;
}