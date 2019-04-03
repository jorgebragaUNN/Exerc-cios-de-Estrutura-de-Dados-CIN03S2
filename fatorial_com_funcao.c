#include<stdio.h>
int fatorial(int num){
	int i, fat=1;
	
	for(i=1;i<=num;i++)
	
		fat*= i;
		printf("\nFatorial de %d: %d\n", num, fat);
return 0;
}
main(){
	int n;
	
	printf("\nFatorial de quantos? ");
	scanf("%d", &n);
	
	fatorial(n);
	
	return 0;
}
