#include <stdio.h>
#include <math.h>

float obliczObjetosciWalca(float r, float h){
    return(M_PI*r*r*h);
}

void obsluzObliczanieObjetosciWalca() {
    float r;
    float h;
    printf("Podaj wysokosc walca\t");
    scanf("%f", &h);
    printf("Podaj promien kola\t");
    scanf("%f", &r);
    printf("Pole kola wynosi:\t%f\n", obliczObjetosciWalca(r, h));

    return;
}

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
    obsluzObliczanieObjetosciWalca();

    return;
}
