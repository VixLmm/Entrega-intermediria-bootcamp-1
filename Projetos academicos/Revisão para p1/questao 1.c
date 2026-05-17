#include <stdio.h>
#include <locale.h>
#include <math.h>
void main (void){
    int num, calculo;
    printf("Digite um número: ");
    scanf("%d",&num);
    for (int i = 0; i <= 10; i++)
    {
        calculo = num * pow(2,i);
        printf("\n%d x 2^%d = %d",num,i,calculo);
    }
    
}