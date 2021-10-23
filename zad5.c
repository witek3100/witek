#include<stdio.h>

int main(){

int h;
int x;
int y;
int c;
int d=10;

printf("%s", "podaj wysokosc: \n");
scanf("%d", &h);

for (x=1; x<h; x++){
	for (y=0; y<h-1;y++){
		printf("%s"," ");}
		for (c=1; c<d; c=c+2){
			printf("%s\n","*");}
	printf("%s", "\n");
}
return 0;
}
