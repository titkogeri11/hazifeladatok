#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool valid_triangle(){

    float a, b, c;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    if(a <= 0 || b <= 0 || c <= 0){
        printf("hibás érték(ek)");
        exit(1);
    }

    if(a + b > c && a + c > b && b + c > a){
        return true;
    }
    else{
        return false;
    }
}

int is_even(){

    int n;
    printf("n: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        return 1; //páros
    }
    else{
        return 0; //páratlan
    }
}

int rendezett(int tomb[], int meret){

    for(int i = 0; i < meret; i++){
        if(tomb[i] > tomb[i + 1]){
            return 0;
        }
        else{
            return 1;
        }
    }


}

int min(int tomb[], int meret){
    int minimum = tomb[0];

    for(int i = 0; i < meret; i++){
        if(minimum > tomb[i]){
            minimum = tomb[i];
        }
    }
    return minimum;

}

int max(int tomb[], int meret){
    int maximum = tomb[0];
    for(int i = 0; i < meret; i++){
        if(maximum < tomb[i]){
            maximum = tomb[i];
        }
    }
}

int cointains(int tomb[], int meret){
    int vizsgalando = 3;
    for(int i = 0; i < meret; i++){
        if(vizsgalando == tomb[i]){
            return 1;
        }
        return 0;
    }
}

int index(int tomb[], int meret){
    int keresett = 4;
    for(int i = 0; i < meret; i++){
        if(keresett = tomb[i]){
            return i;
        }
    }
    return 0;
}

int tomb_vesszovel(int tomb[], int meret){
    for(int i = 0; i < meret; i++){
        printf("%d", tomb[i]);
        if(i < meret - 1){
            printf(", ");
        }
        if(i == meret -1){
            printf("\n");
        }

    }
}

int pozitivan(int tomb[], int meret){
    for(int i = 0; i < meret; i++){
        if(tomb[i] < 0){
            tomb[i] = abs(tomb[i]);
        }
    }
    for(int i = 0; i < meret; i++){
        printf("%d ", tomb[i]);
    }
}

int felhokarcolok(int tomb[], int meret){
    int sum = 0;
    for(int i = 0; i + 1 < meret; i++){
        int kulonbseg = tomb[i] - tomb[i + 1];
        if(kulonbseg < 0)        // abszolút érték
            kulonbseg = -kulonbseg;
        sum += kulonbseg;
    }
    return sum;
}

int main(){
    int szamok[5] = {1, 2, 3, 4, 5,};
    int meret = 5;

    int szamok2[5] = {-1, -2, -3, -4, -5};
    int meret2 = 5;

    int szamok3[5] = {5, 2, 8, 10, 4};                        //felhőkarcolókhoz
    int meret3 = 5;

/*
    //1. feladat
bool legal = valid_triangle();
printf("A megadott háromszög szabályos: %d\n", legal);
    //2. feladat
bool paros = is_even();
if(paros != 1){
    printf("A szám páratlan.\n");
}
else{
    printf("A szám páros.\n");
}
    //3. feladat

bool rendezette = rendezett(szamok, meret);
printf("A lista rendezett-e: %d\n", rendezette);
    //4. feladat
int min_ertek = min(szamok, meret);
int max_ertek = max(szamok, meret);
printf("A lista minimum értéke: %d\n", min_ertek);
printf("A lista maximum értéke : %d\n", max_ertek);
    //5. feladat
int tartalmaz = cointains(szamok, meret);
printf("A lista tartalmazza-e az elemet: %d", tartalmaz);
    //6. feladat
int sorszam = index(szamok, meret);
if(sorszam != 0){
    printf("A keresett elem sorszáma: %d", sorszam);   
}
else{
    printf("Hiba - az elem nem található\n");
}
    //7. feladat SPACEHOLDER



*/
    //8. feladat
tomb_vesszovel(szamok, meret);
    //9. feladat
for(int i = 0; i < meret; i++){
    printf("%d ", szamok2[i]);
    if(i == meret2 - 1){
        printf("\n");
    }
    }
pozitivan(szamok2, meret2);
    //10. feladat
int felhokarc_kulonbsegek = felhokarcolok(szamok3, meret3);
printf("\nA méretkülönbségek összege: %d\n", felhokarc_kulonbsegek);
    //11. feladat
puts(__DATE__ + sizeof("xxxxxxxx") - sizeof("x")); //dátum, majd 7 karakterrel eltolás
//puts - printf, csak a végén automatikus a sortörés
return 0;
}