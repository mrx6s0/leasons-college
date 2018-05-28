#include <stdio.h>
#include <stdlib.h>

int main()

{

float i, num, exp, res = 1;

printf("\n\t\t########### Calculo exponencial ##########\n");
printf("\n\t\texpressão matemática: x^n\n\n\n\t");

printf("\nEntre com o numero a ser calculado: ");
scanf("%f",&num);

printf("Expoente: ", num);
scanf("%f", &exp);

for(i=0; i<exp; i++) /*loop para garantir que o expoente terá acrscimo a partir de zero com o com o expoente maior que i (maior que 0),  assim efetuando a condição
que permir o calculo exponencial */

{

res *= num;

}


printf("\n\n\nO resultado é: %.2f\n\n\n", res);


return 0;

}
