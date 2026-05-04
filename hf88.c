#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *in = fopen("in.txt", "r");
    if (in == NULL) {
        fprintf(stderr, "Hiba! Nem sikerült megnyitni az in.txt fájlt!\n");
        return 1;
    }

    printf("# in.txt sikeresen megnyitva\n");

    FILE *out = fopen("out.txt", "w");
    if (out == NULL) {
        fprintf(stderr, "Hiba! Nem sikerült megnyitni az out.txt fájlt!\n");
        fclose(in);
        return 1;
    }

    printf("# 0,5-nél nagyobb számok szűrése...\n");

    double szam;
    int db = 0;

    while (fscanf(in, "%lf", &szam) == 1) {
        if (szam > 0.5) {
            fprintf(out, "%.10f\n", szam);
            db++;
        }
    }

    printf("# szűrés vége\n");

    fclose(out);
    printf("# out.txt bezárva\n");

    fclose(in);

    printf("# out.txt-be kiírt számok mennyisége: %d db\n", db);

    return 0;
}