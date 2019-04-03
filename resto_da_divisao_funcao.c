/* Construir uma função que retorne o resto de uma divisão entre nº inteiros */

#include<stdio.h>

int retorn_resto_div(int x, int y){
	int resto;
	resto=x%y;
	if((x >= 0) && (y <= 0))

	return resto;
}
main(){
	int num1, num2, result;
	
	printf("\nInforme o primeiro numero: ");
	scanf("%d",&num1);
	printf("\nInforme o segundo numero: ");
	scanf("%d",&num2);
	result=retorn_resto_div(num1, num2);
	
	printf("\nO resto da divisao de %d e %d = %d\n", num1, num2, result);

	return 0;
}
