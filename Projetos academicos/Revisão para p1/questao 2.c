 #include <stdio.h>
 #include <locale.h>
 void main (void){
     int f_inicial,f_final,f_atual;
     float celsius;
     printf("Digite a temperatura inicial: ");
     scanf("%d",&f_inicial);
     printf("Digite a temperatura final: ");
     scanf("%d",&f_final);
     f_atual = f_inicial;
     printf("Fahreinheit\tCelsius\n");
     while (f_atual<=f_final)
     {
         celsius = (5.0/9.0) * (f_atual - 32.0);
         printf("\n%d\t%f",f_atual,celsius);
         f_atual++;
     }
}