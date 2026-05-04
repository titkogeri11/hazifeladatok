#include <stdio.h>
#include <stdlib.h>

#define BUFFER 1024

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Hiba! Adja meg egy szöveges állomány nevét!\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (!fp) {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni!\n", argv[1]);
        return 1;
    }

    char buffer[BUFFER];
    int sorok = 0;

    while (fgets(buffer, BUFFER, fp)) {
        sorok++;
    }

    fclose(fp);

    printf("%d\n", sorok);

    return 0;
}