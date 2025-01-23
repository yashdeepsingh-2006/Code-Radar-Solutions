#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%C", &a);
    printf("You entered: %c", a);
    return 0;
}