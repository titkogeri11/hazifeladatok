#include <stdio.h>
#include <stdlib.h>
 #include <string.h>

#define BUFFER 128

int main(int argc, char *argv[]){

    char szo[BUFFER];
    char max[BUFFER];

    if(argc  == 1){
        printf("Nem adtál meg egyetlen szót sem!\n");
        exit(1);
    }

    int minhossz = strlen(argv[1]);

    for(int i = 2; i < argc;i++){
        int hossz = strlen(argv[i]);

        if(hossz < minhossz){
            minhossz = strlen(argv[i]);
        }
    }


    for (int i = 1; i < argc; i++) {
        if (strlen(argv[i]) == minhossz) {
            printf("%s\n", argv[i]);
        }
    }


}