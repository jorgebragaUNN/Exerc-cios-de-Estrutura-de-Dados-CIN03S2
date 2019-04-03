#include<stdio.h>
#include<math.h>
int transf_segundos(int x){
	int tempo, hora, min, seg;
	hora=(x/3600);
	min=((x % 3600)/60);
	seg=(x-(3600 * hora)-(min * 60));
	
	printf("\n%d h %d min e %d seg\n", hora, min, seg);
	return 0;
}
main(){
	int num;
	
	printf("\nInforme a qtde de segundos para saber do tempo: ");
	scanf("%d",&num);
	
	transf_segundos(num);
	return 0;
}
