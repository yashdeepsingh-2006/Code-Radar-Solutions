#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);

    if(a>='a'&& a<='z'){
        printf("Lowercase");
    }else if(a>='A' && a<='Z'){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}