#include<stdio.h>

int main(void){

printf("%s\n", "podaj wysokosc: ");
int a;
scanf("%d\n", &a);
for (int i=0; i<a; i++){
  for(int j=0;j<(a-i);j++)printf(" ");
  for(int j=0;j<i*2-1;j++)printf("*");
  printf("\n");
}

int x=a+1;
int n;
for (int n=0; n<x; n++){
  for(int m=0;m<(a-n);m++)printf(" ");
  for(int m=0;m<n*2-1;m++)printf("*");
  printf("\n");
}

return 0;
}
