#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char[100] a,b;
    scanf("%s %s", &a, &b);
    printf("You entered: %s and\n %s", a,b);
    return 0;
}