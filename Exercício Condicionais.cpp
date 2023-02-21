#include <stdio.h>
#include <stdlib.h>

int main () {
	int num;
	
	printf("Digite um numero:");
	scanf("%d", &num);
	
	if (num < 9) {		
			printf ("O numero e menor 9");
	}else if (num > 9){
			printf("O numero e maior que 9");
	}else{
			printf("O numero e igual a 9");
	}
	return 0;
			
	
}