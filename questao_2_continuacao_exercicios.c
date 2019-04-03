/*Exercicio nº 2, do PDF de exercicios de continuação*/
#include<stdio.h>
int dobro(int x, int y){
	int result;
	result=((x*2)+(y*2));
	return result;
}
int mult(int x, int y){
	return x*y;
}
int result_multi(int x, int y){
	if(mult(x,y)>1)
		return 1;
		else
			return 0;
}
main(){
	int num1, num2, resultado_dobro, resultado_mult, resultado_p_n;
	
	printf("\nInforme um numero positivo: "); scanf("%d",&num1);
	printf("Informe um numero negativo: "); scanf("%d",&num2);
	resultado_dobro=dobro(num1, num2);
	resultado_mult=mult(num1, num2);
	resultado_p_n=result_multi(num1, num2);
	
	printf("\nDobro: %d\nMultiplicacao: %d\n", resultado_dobro, resultado_mult);
	if(resultado_p_n == 1)
		printf("Resultado da multiplicacao anterior eh positivo\n\n");
		else if(resultado_p_n == 0)
			printf("Resultado da multiplicacao anterior eh negativo\n\n");
	
	system("pause");
}
