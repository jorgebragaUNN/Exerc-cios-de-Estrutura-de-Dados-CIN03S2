#include<stdio.h>
int soma_dobro(int a, int b){
	int soma;
	a=2*a;
	b=2*b;
	soma=a+b;
	
	return soma;
}
main(){
	int x, y, resultado;
	
	printf("Digite um numero: ");
	scanf("%d",&x);
	printf("Digite um numero: ");
	scanf("%d",&y);
	resultado=soma_dobro(x, y);
	
	printf("\n\nA soma do dobro dos numeros: %d", resultado);
	return 0;
}

/*Programa p/ somar o dobro dos numeros*/
