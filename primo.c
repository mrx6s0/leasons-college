#include <stdio.h>
#include <string.h>


int main()

  {

    int a;


    {
       printf("Digite um número para verificar se é primo: \n");
       scanf("%i", &a);

       if (a % 2 != 0)

       {

        printf("O número é primo", a);

       }

       else

       {

        printf("o numero não é primo", a);

       }


       return 0;

}


}
