#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);

    if(a >= '0' && a <= '9'){
        printf("Digit");
    }else if(a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == "I" || a == 'o' || a == 'O' || a == 'u' || a == 'U'){
        printf("Vowel");
    }else if((a >= 'a' && a<='z') || (a>= 'A' && a<='Z')){
        printf("Consonant");
    }else{
        printf("Special Character");
    }
    return 0;
}