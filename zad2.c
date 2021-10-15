#include<stdio.h>

int main(){

	int x;
	int a=50;
	printf("%s","podaj liczbe: \n");
	scanf("%d", &x);

	while (x!=a){
		printf("%s","zle!,podaj jeszcze raz: \n");
		scanf("%d", &x);}

	if (x=a){printf("%s","zgadles! \n");}
}
