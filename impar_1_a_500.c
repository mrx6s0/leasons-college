#include <stdio.h>
#include <string.h>

//#include <unistd.h>

int main()

  {

    int a = 1;

    while (a <= 500)

    {

       if (a % 2 != 0)

       {
          //sleep(0);

          printf("\n\n\t*** Números impares, entre 1 e 500 ***\n\n\t");
          printf ("\n %d \n", a);

          sleep(0.1);

       }


       a++;

     }


       return (0);

}
