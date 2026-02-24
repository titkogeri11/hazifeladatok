#include <stdio.h>

void egytolszazig() {
    int sum = 0;
    for(int digit = 1; digit <= 100; digit++){
        sum += digit;
    }
    printf("%d\n", sum);
}

void ezernelkisebb(){
    int sum = 0;
    for(int i = 1; i < 1000; i++){
        if(i % 3 == 0 && i % 5 == 0){
            sum += i;
        }
        else if(i % 5 == 0){
            sum += i;
        }
        else if(i % 3 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
}

void neggyeloszthato(){
    int szam;
    printf("n: ");
    scanf("%d", &szam);
    for(int i = 1; i <= szam;i++){
        if(i % 4 == 0){
            printf("%d ; ", i);
        }
    }
}

void paratlanvisszafele(){
    int n;
    printf("\nnum: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        if(i % 2 != 0){
            printf("%d ; ", i);
        }
    }
}

void ascii(){

int c;
for(int i = 32;i <= 126; i++){
    printf("%d: %c\n", i, i);
}
}

void egytolnig(){
int n;
printf("n: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    printf("%d", i);
    if(i < n){
        printf(" -> ");
    }
}
}

int main(){
    egytolszazig();
    ezernelkisebb();
    neggyeloszthato();
    paratlanvisszafele();
    ascii();
    egytolnig();
}