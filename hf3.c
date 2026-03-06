#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void mariov3(){

int magassag;
printf("magassag: ");
scanf("%d", &magassag);

for (int i = 1; i <= magassag; i++) {
        for (int j = 0; j < magassag - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }

}

void diamond(){
    int magassag;
    printf("magassag: ");
    scanf("%d", &magassag);

    if(magassag < 3 && magassag % 2 == 0){
        printf("error\n");
        exit(1);
    }

    for(int i = 1; i <= magassag; i++){
        for (int j = 0; j < magassag - i; j++) {
        printf(" ");
        }
        for (int j = 0; j < i; j++) {
        printf("*");
        }
    }
}

int fibo(void) {
    int x1 = 0, x2 = 1;
    int n;

    printf("elem száma: ");
    scanf("%d", &n);

    int x = 0;
    for (int i = 1; i <= n; i++) {
        x = x2 + x1;
        x2 = x1;
        x1 = x;
        return x;
    }

    printf("\n%d. elem: %d\n", n, x);
}

int legnagyobboszto(){

    int n;
    printf("n: ");
    scanf("%d", &n);

    if(n <= 1) return 0;  //nincs osztó itt

    int lno = 1; 
    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0) {
            lno = i;
            return lno;
            break;
        }
    }


printf("A szám legnagyobb osztója: %d\n", lno);


}

int main() {
    //mariov3();
    //diamond();
    fibo();

    printf("Az első 100 Fibonacci-szám:\n");

    for(int i = 1; i <= 100;i++){
        int fib = fibo(i);
        printf("%d : %d", i, fib);
    }

    legnagyobboszto();
    printf("Az elso 50 szám legnagyobb valódi osztója:\n");

    for (int i = 1; i <= 50; i++) {
        int eredmeny = legnagyobboszto(i);
        printf("%d : %d\n", i, eredmeny);
    }

    return 0;
}