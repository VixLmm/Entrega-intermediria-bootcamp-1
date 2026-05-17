#include <stdio.h>
#include <locale.h>
void main(void){
    setlocale(LC_ALL,"Portuguese");
    int vetor[4],i;
    for ( i = 0; i < 4; i++)
    {
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    for (i = 0; i < 4; i++){
    printf("Posição [%d] = %d\n",i+1,vetor[i]);}
}