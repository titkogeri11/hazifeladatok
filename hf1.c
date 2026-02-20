#include <stdio.h>
#include <math.h>
//#define _USE_MATH_DEFINES

//hf 1. óra

void negyzet(){
    int oldalhossz;
    printf("Add meg az oldalhosszt: ");
    scanf("%d", &oldalhossz);
    int kerulet = 4 * oldalhossz;
    int terulet = oldalhossz * oldalhossz;
    printf("A négyzet kerülete: %d\n", kerulet);
    printf("A négyzet területe: %d\n", terulet);
}


void teglalap(){
    int a, b;
    int terulet, kerulet;

    printf("A oldal: ");
    scanf(" %d", &a);
    printf("\nB oldal: ");
    scanf(" %d", &b);
    kerulet = 2 * (a + b);
    terulet = a * b;

    printf("Terület: %d\n", terulet);
    printf("Kerület: %d\n", kerulet);
}

void kor(){
    float r;
    double pi = acos(-1.0);  // m_pi helyett, csak ez megy githubon
    float kerulet = 2 * r * pi;
    float terulet = (r*r) * pi;

    printf("Kör sugara: ");
    scanf("%f", &r);

    printf("Kerülete: %.5f\n", kerulet);
    printf("Területe: %.5f\n", terulet);
}


int main(){
negyzet();
teglalap();
kor();
}