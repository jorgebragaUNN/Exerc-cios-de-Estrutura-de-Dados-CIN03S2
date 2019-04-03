#include<stdio.h>
main(){
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18)
		printf("\nMaior de idade\n");
		else
			printf("\nMenor de idade\n");
system("pause");
}
