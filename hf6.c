#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//1. A
void angolabc(){

    for(int i = 'a'; i <= 'z'; i++){
        printf("%c\n", i);
    }

}

//1. B

void angolabcb(){

    for(int i = 'a'; i <= 'z'; i++){
    printf("%c", i);
    }
    printf("\0");
}

//2.
int osszeg(){

    int n1, n2;

    printf("\nAdj meg pontosan 2 számot: ");
    int db = scanf("%d %d", &n1, &n2);

    if(db != 2){
        printf("Hiba: nem pontosan 2 paraméter (int)");
        return -1;
    }
    return n1 + n2;

}

void bekertszavak(){
    printf("Adj meg szavakat a '*' végjelig!\n" );
char bsz[25];
char szavak[100][25]; //100 szo, 25c
int db = 0;
while(1){

    printf("Szó: ");
    fgets(szavak[db], 25, stdin);

    if(strcmp(szavak[db], "*\n") == 0){
        db--;
        break;
    }

db++;
}
printf("%d db szót adtál meg.\n", db);
int lhsz = 0;
for(int i = 0; i < db; i++){
    int max = strlen(szavak[i]);
    if(max < strlen(szavak[i+1])){
        max = strlen(szavak[i+1]);
        lhsz = max - 2;                                                     //temp
    }
    }
printf("Ezek közül a leghosszabb %d karakter hosszú.\n", lhsz);
}

void kulszamok(){
        int volt[100] = {0};
    int szam;
    int kulonbozo = 0;
printf("Adj meg 0 végjelig számokat az [1, 99] intervallumból!\n");


while(1){
printf("Szám: ");
scanf("%d", &szam);

if(szam == 0){
    break;
}

if (szam < 1 || szam > 99) {
        printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
        continue;
        }

if (volt[szam] == 0) {
        volt[szam] = 1;
        kulonbozo++;
        }
}

printf("%d db különböző szám lett megadva.", kulonbozo);
printf("Ezek növekvő sorrendben: ");
for(int i = 0;i < 100;i++ ){
    if(volt[i] != 0){
        printf("%d ", i);
    }
}
}

void lotto(){

int n, min, max;
printf("Hány darab számot szeretnél kapni?");
scanf("%d", &n);
printf("Alsó határ: ");
scanf("%d", &min);
printf("Felső határ: ");
scanf("%d", &max);

for(int i = 0; i < n; i++){
    int r = (rand() % (max - min + 1)) + min;
    printf("%d ", r);
}

}

int main(){

    int tomb[10];
    int meret = 10;

//angolabc();
//angolabcb();
lotto();


    return 0;
}