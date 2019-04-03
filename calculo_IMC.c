#include<stdio.h>
main(){
	float imc, peso, altura;
	
	printf("Informe o seu peso: ");
	scanf("%f", &peso);
	printf("Informe a sua altura: ");
	scanf("%f", &altura);
	
	imc=(peso/(altura*altura));
	
	if(imc <= 18.5)
		printf("\nAbaixo do peso\n");
		else if(imc >=18.6 && imc <=24.9)
			printf("\nSaudavel\n");
			else if(imc >= 25 && imc <= 29.9)
				printf("\nPeso em excesso\n");
				else if(imc >= 30 && imc <= 34.9)
					printf("\nObesidade grau I\n");
					else if(imc >= 35 && imc <= 39.9)
						printf("\nObesidade grau II (severa)\n");
						else
							printf("\nObesidade grau III (morbida)\n");
system("pause");
						
}
