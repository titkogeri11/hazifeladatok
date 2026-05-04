#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 256

int main() {
    FILE *fp = fopen("valos_szamok.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "Hiba! Nem sikerült megnyitni a fájlt!\n");
        return 1;
    }

    char sor[BUFFER];
    double osszeg = 0.0;

    while (fgets(sor, BUFFER, fp)) {

        sor[strcspn(sor, "\n")] = '\0';


        for (int i = 0; sor[i]; i++) {
            if (sor[i] == ',') {
                sor[i] = '.';
            }
        }

        double szam = strtod(sor, NULL);
        osszeg += szam;
    }

    fclose(fp);

    printf("%.20f\n", osszeg);

    return 0;
}