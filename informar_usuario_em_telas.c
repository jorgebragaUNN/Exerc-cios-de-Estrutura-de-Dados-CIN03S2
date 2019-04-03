/*Exercicio nº 1, do PDF de exercicios de continuação*/
#include<stdio.h>
int verdadeiro(int num){
		printf("\nVERDADEIRO\n\n");	
	return 0;
}
int falso(int num){
		printf("\nFALSO\n\n");	
	return 0;
}
int nulo(int num){
		printf("\nVOCE PRECISA SELECIONAR UMA DAS OPCOES\n\n");	
	return 0;
}
main(){
	int op;
	
	printf("Informe um numero: "); scanf("%d",&op);
	
		if(op>0)
			verdadeiro(op);
			else if(op<0)
				falso(op);
				else
					nulo(op);
	system("pause");
}
