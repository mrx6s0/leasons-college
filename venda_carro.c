#include <stdio.h>
#include <stdlib.h>

int main(void)

  {
   
   
  /* Declaração das variáveisdo tipo float
   Indicando o custo do carro de fábrica, o lucro do distribuidos, e o imposto aplicado
   */
  
  float carfab, luc, imp, pre_final,
       porc_luc, porc_imp; 
  
  
  printf("Valor de fábica do carro, em reais: \n");
  scanf("%f",&carfab); 
  
  printf("O preço de fábrica é: %2.f\n", carfab);
  
  getchar();
  
  
  printf("\nPorcentual de lucro: \n");
  scanf("%f",&luc);
  
  if (luc <= 6) 
  
  {
  
  printf("lucro dentro do padrão.\n");
   
   
  } 
  
  else
   
  {
  
  printf("\nErro!\nO lucro não pode ser maior que 6 porcento.\n");
  
  exit(0);
  
  }

  printf("Impostos aplicados sob o preço de fábrica: \n");
  scanf("%f",&imp);
   
  if (imp > 20)
  
  {
	  
	  printf("Imposto fora do padrão.\n"); 
	  
  }
  
   else 
   
   
  {
	  printf("Imposto dentro do padrão.\n");
      
  }
  
   /* A porcentagem de um número é n / 100, 
    onde n representa um número natural inteiro */ 
  
        porc_luc = (luc / 100);
           
        printf("\nO lucro obtido pelo distribuidor é de %f porcento.", porc_luc); 
        
        porc_imp = (imp / 100);  
  
        printf("\nO imposto para adquirir o veículo é de %f porcento.", porc_imp);
        
        pre_final = carfab + luc + imp;
        
        printf("\nPreço final do carro, com os impostos: %.2f\n", pre_final);
        
        printf("\nEncerrando programa...\n");
      
        getchar();     
 
	  return 0;

}
