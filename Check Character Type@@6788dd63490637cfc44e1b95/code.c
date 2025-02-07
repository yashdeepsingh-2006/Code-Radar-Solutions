#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);

    if(a >= '0' && a <= '9'){
        printf("Digit");
    }else if(a)
    return 0;
}