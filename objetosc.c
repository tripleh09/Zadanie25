#include <stdio.h>

float obliczObjetoscProstopadloscianu (float a, float b, float c) {
	return(a*b*c);
}

void obsluzObliczanieObjetosciProstopadloscianu(){
    float a;
    float b;
    float c;

	printf("Podaj wartosc a:\t ");
	scanf("%f", &a);
	printf("Podaj wartosc b:\t");
	scanf("%f", &b);
    printf("Podaj wartosc c:\t ");
	scanf("%f", &c);

	printf ("\n wynik:\t%f\n", obliczObjetoscProstopadloscianu(a, b, c));

	return;
}

int main() {
    obsluzObliczanieObjetosciProstopadloscianu();

    return;
}
