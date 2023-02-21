#include <stdio.h>
#include <stdlib.h>

	int num, num2;
	int main () {
			printf("Digite um numero:");
	scanf("%d", &num);
	printf("Digire um segundo numero:");
	scanf("%d", &num2);
	
	if(num > 0 || num2 < 10){
		printf("\n\nO numero e maior que 0 ou maior que 10");
		if(num > 0){
			printf("\n\nO numero e maior que 0");
		if(num < 10){
			printf("\n\nO numero e menor que 10");
		}
	}else{
		printf("nehuma das condicoes e veridica");
	}
	return 0;
	}
		}
	
	
	
