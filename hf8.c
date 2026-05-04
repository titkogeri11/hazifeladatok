#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MERET 10

void stat(int tomb[], int meret, int *min, int *max, double *atlag){  //1. feladat
    int sum = 0;

    *min = tomb[0];
    *max = tomb[0];

    for(int i = 0; i < meret;i++){
        if(tomb[i] < *min){
            *min = tomb[i];
        }
        if(tomb[i] > *max){
            *max = tomb[i];
        }
        sum += tomb[i];
    }

    *atlag = (double)sum / meret;


}

// Struktúra a visszatérési értékekhez
typedef struct {
    int min;
    int max;
    double atlag;
} Eredmeny;

// Függvény a számításokra
Eredmeny szamol(int tomb[], int meret) {
    Eredmeny e;

    e.min = tomb[0];
    e.max = tomb[0];
    int osszeg = 0;

    for (int i = 0; i < meret; i++) {
        if (tomb[i] < e.min)
            e.min = tomb[i];

        if (tomb[i] > e.max)
            e.max = tomb[i];

        osszeg += tomb[i];
    }

    e.atlag = (double)osszeg / meret;

    return e;
}

int main(int argc, char *argv[]){
    int tomb[10];
    int min;
    int max;
    double atlag;
    /*   1. feladat
    srand(2026);



    for(int i = 0; i < 10;i++){
        tomb[i] = rand() % (99 - 10 + 1) + 10;
    }
    printf("Elemek: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", tomb[i]);
    }
    stat(tomb, 10, &min, &max, &atlag);
    printf("\nMinimum: %d\nMaximum: %d\nÁtlag: %.1f\n", min, max, atlag);

*/

    for(int i = 0; i < 10;i++){
        tomb[i] = rand() % (99 - 10 + 1) + 10;
    }
    printf("Elemek: ");
    for(int i = 0; i < MERET; i++){
        printf("%d ", tomb[i]);
    }

    // Függvény hívása
    Eredmeny eredm = szamol(tomb, MERET);

    // Eredmények kiírása
    printf("Legkisebb elem: %d\n", eredm.min);
    printf("Legnagyobb elem: %d\n", eredm.max);
    printf("Az elemek atlaga: %.2f\n", eredm.atlag);



    return 0;
}