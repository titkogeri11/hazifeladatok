#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bennevan(int tomb[], int meret, int ertek) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] == ertek) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int min;
    int max;
    int meret = 0;
    int darab;
    int tomb[darab];
    srand(time(NULL));


    printf("Hány db random számot kérsz?");
    scanf("%d", &darab);

    printf("Alsó határ:");
    scanf("%d", &min);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &max);


    while (meret < darab) {
        int uj = rand() % (max - min + 1) + min;

        if (!bennevan(tomb, meret, uj)) {
            tomb[meret] = uj;
            meret++;
        }
    }

    for (int i = 0; i < meret; i++) {
        printf("%d ", tomb[i]);
    }


    for(int i = 0; i < darab;i++){
        printf("%d ", tomb[i]);
    }

    return 0;
}