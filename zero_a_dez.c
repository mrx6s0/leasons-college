#include <stdio.h>

int main(void)

{

  float num;

  a:

  printf("\n\tEntre com um número inteiro: \n\t");
  scanf("%f", &num);



  if (num <= 10)

  {

   printf("\no numero é: %f\n", num);

  }

  else

  {

  printf("\nErro\ndeve ser um número entre 0 e 10\n\n\n\t");

  goto a;

  return 0;


   }


}
