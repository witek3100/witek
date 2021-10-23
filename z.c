#include<stdio.h>
#include<string.h>

int main(){
char text2[20];
char text[20]="ala ma kota";
int i;
for (i = 0; i < 10; i++)
        if (text[i]=='a') printf("%d\n", i), strcpy(text2, text);
int x;
x=strlen(text2);

printf("%d", x);
}
