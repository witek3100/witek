#include<stdio.h>
#include<math.h>

void main(void){
float a;
float b;
float c;

	printf("%s","podaj wspolczynniki funkcji f(x)=Ax^2+Bx+C\n");
	printf("%s","podaj a: \v\t");
	scanf("%f", &a);

	printf("%s","podaj b: \v\t");
	scanf("%f", &b);

	printf("%s","podaj c: \v\t");
	scanf("%f", &c);

	float delta;

	delta = (b*b)-(4*a*c);
	printf("delta wynosi: %f\n", delta);
	float x1;
	float x2;
	float g=sqrt(delta);
	if (delta < 0){printf("%s","funkcja nie ma miejsc zerowych \n");}

	if (delta == 0){x1=-b/2*a; printf("miejsce zerowe funkcji: %lf\n", x1);}

	if (delta > 0){x1=-b-g/4*a; x2=-b+g/4*a; printf("miejsca zerowe funkcji:\n %lf\n %lf\n", x1, x2);}
}
