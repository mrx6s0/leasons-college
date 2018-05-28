#include <stdio.h> 
#include <stdlib.h> 

int main(void)

  {
  
   char func[50];
   float horas_trab,sal,sal_bru,
   sal_rec, imp, comi;    
   
   printf("Nome do funcionário: \n");
   gets(func);
   
   //printf("O nome do funcionário é: %s\n", func); 
   
   printf("Quantas horas você trabalha?\n"); 
   scanf("%f", &horas_trab);
   
   printf("Qual seu salário mensal?\n");
   scanf("%f",&sal);
    
   comi = horas_trab * 55; 
   sal_bru = sal + comi;
   imp = sal_bru*0.3 ; 
    
   sal_rec = sal - imp;
   
   printf("O salário de %s é de %2.f R$", func, sal_rec);

   
    
   return 0;
   
 }
