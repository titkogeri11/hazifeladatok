#include <stdio.h>
#include <string.h>  //strlen miatt kell csak

void line(char c, int length){
    for(int i = 0; i < length; i++){
        printf("%c", c);
    }
    printf("\n");
}

int rfind_char(char s[], char c, int meret){
    int hely = -1;
    for(int i = 0; i < meret; i++){
        if(s[i] == c){
            hely = i;
        }
    }
    return hely;
}

int char_count(char s[], char c, int meret){
    int counter = 0;
    for(int i = 0; i < meret; i++){
        if(s[i] == c){
            counter++;
        }
    }
    return counter;
}

int match_ends(char words[][10], int l){
    int egyezo = 0;
    for(int i = 0; i < l; i++){
        char elso = words[i][0];
        int len = strlen(words[i]);
        if(len > 0){
            char utolso = words[i][len - 1];
            if(elso == utolso){
                egyezo++;
            }
        }
    }
    return egyezo;
}

void fizzbuzz(){
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("fizzbuzz\n");
        } else if(i % 3 == 0){
            printf("fizz\n");
        } else if(i % 5 == 0){
            printf("buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}

int main(){
    // 1. feladat
    printf("alma\n");
    line('-', 50);
    printf("körte\n");
    
    // 2. feladat
    printf("A szó: Madagaszkár, a karakter: a, utolsó előfordulás: %d\n", rfind_char("Madagaszkár", 'a', 15));
    
    // 3. feladat
    printf("A szó: Madagaszkár, a karakter: 'a' előfordulások száma: %d\n", char_count("Madagaszkár", 'a', 15));
    
    // 4. feladat
    char szavak[][10] = {"alma", "körte", "abba", "apáca", "szerző"};
    printf("Egyezők száma: %d\n", match_ends(szavak, 5));
    
    // 5. feladat
    fizzbuzz();
    
    return 0;
}