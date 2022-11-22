#include <stdio.h>
#include <stdlib.h>


 main() {
 		int quantidade300=0;
 		float media,valor;
 		int cont;
 		int soma=0;
 		
 		
 		
 		for (cont=0;cont<5; cont++){
 			
 			printf("Digite o valor da venda: ");
 			scanf("%f",&valor);
 			
 			if (valor>300){
 				quantidade300++;
			 }
 			
 			soma= valor+soma;
			 }
			 
			 media= soma/5;
			 
			 printf("A media das vendas foi de: %.2f \n",media);
			 printf("A quantidade de vendas maior que 300 reais e: %d",quantidade300);
			 
		}
			 
			 
			 
			 
		
 	
 	
 	
	

