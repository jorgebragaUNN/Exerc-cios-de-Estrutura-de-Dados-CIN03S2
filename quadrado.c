#include<stdio.h>

int quadrado(x){
	printf("\nO quadrado de %d eh: %d", x, (x*x));
	return 0;
}
main(){
	int num;
	
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	
	quadrado(num);
	return 0;
}
