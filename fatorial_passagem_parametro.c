#include<stdio.h>
int fatorial(int num){
	int i, fat=1;
	
	for(i=1;i<=num;i++)
	
		fat*= i;
		return (fat);
}
main(){
	int n;
	
	printf("\nFatorial de quantos? ");
	scanf("%d", &n);
	
	printf("\nFatorial de %d: %d\n", n, (fatorial(n)));
	
	return 0;
}

/*Calculo de fatorial por funcao de passagem por parâmetro*/
