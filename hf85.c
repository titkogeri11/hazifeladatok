#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUFFER 512

int is_valid_c_identifier(const char* input){


    if (input[0] == '\0') return 0;


    if (!(isalpha(input[0]) || input[0] == '_')) {
        return 0;
    }


    for (int i = 1; input[i] != '\0'; i++) {
        if (!(isalpha(input[i]) || isdigit(input[i]) || input[i] == '_')) {
            return 0;
        }
    }

    return 1;
}

int main(){

    char s[BUFFER];

    while(1){

        printf("Input: ");
        fgets(s, BUFFER, stdin);

        s[strcspn(s, "\n")] = '\0';

        if(strcmp(s, "*") == 0){
            break;
        }

        if(is_valid_c_identifier(s)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}