#include <stdio.h>
#include <locale.h>
void main(void) {
    setlocale(LC_ALL, "Portuguese");
    float notas[10], media;
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i]; 
    }
    media = media / 10.0;
    for (int i = 0; i < 10; i++)
    {
        printf("Aluno %d: %2.f\n",i+1,notas[i]);
    }
    printf("Media turma: %2.f\n",media);
    }