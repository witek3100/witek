#include<stdio.h>
#include<string.h>

int main(){

int i;
char text2[20];
char text[20]="ala ma kota";

while(text[i]){

	text[i] = text2[i];
	i++;
	}

printf("%s\n", text2);
}
