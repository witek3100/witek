#include<stdio.h>
#include<stdlib.h>
int main(){
printf("%s\n", "podaj wzor funkcji w podanym formacie (f(x)=Ax^2+Bx+C): ");
char wzor[20];
scanf("%s", &wzor[20]);
int i;
for(i=0; i<sizeof(wzor)/sizeof(wzor[0]); i++);{
	printf("%s", wzor[i]);
}
