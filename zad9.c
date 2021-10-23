#include<stdio.h>

int main(){

int liczby[]={2, 3, 67, 45, 23};
int i;
for (i=0; i<sizeof(liczby)/sizeof(int); i++){
	printf("%d\n", liczby[i]);}

printf("%ld\n", sizeof(liczby));
}
