#include <stdio.h>
#include <locale.h>

void main (void){
    setlocale(LC_ALL, "Portuguese");

    float notas[10];
    float soma = 0.0;
    float media;
    int acima_da_media = 0; 
    printf("--- Cadastro de Notas ---\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; 
    }

    media = soma / 10.0;

    printf("\n===========================\n");
    printf("    RELATÓRIO DA TURMA     \n");
    printf("===========================\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d.........: %.2f\n", i + 1, notas[i]);
        
        if (notas[i] > media) {
            acima_da_media++; // Se for maior, adiciona +1 no nosso contador
        }
    }
    
    printf("Média da turma: %.2f\n", media);
    printf("Alunos acima da média:  %d\n", acima_da_media);

}