#include <stdio.h>
#include <stdlib.h>

	int num, num2;
	int main () {
		
		printf("Digite um numero:");
		scanf("%d", &num);
		printf("Digite um segundo numero:");
		scanf("%d", &num2);
		
		if(num == 5 || num2 == 10){
			printf("\n 5 ou 10");
		
		}else if (num < num2){
		printf("O primeiro e menor");
	}
			
			
	}