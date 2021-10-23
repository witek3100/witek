#include<stdio.h>

int main(){

printf("%s\n", "podaj wysokosc: ");
int a;
scanf("%d", &a);
for (int i=0; i<a; i++){
  for(int j=0;j<(a+3-i);j++)printf(" ");
  for(int j=0;j<i*2-1;j++)printf("*");
  printf("\n");
}

int x=a+3;
int n;
for (int n=0; n<x; n++){
  for(int m=0;m<(x-n);m++)printf(" ");
  for(int m=0;m<n*2-1;m++)printf("*");
  printf("\n");
}

int k=a+6;
int l;
for (int l=0; l<k; l++){
  for(int o=0; o<(k-l);o++)printf(" ");
  for(int o=0;o<l*2-1;o++)printf("*");
  printf("\n");
}
return 0;
}
