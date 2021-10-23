#include<stdio.h>

int main(){
int x;
int a;
int y;
int b;
	printf("%s", "podaj wysokosc: \n");
	scanf("%d", &a);
	printf("%s", "podaj szerokosc: \n");
	scanf("%d", &b);
	for (x=0; x<a; x++){
		printf("%s","\n");
		for (y=0; y<b; y++){
			printf("%s", "#");}}
}
