#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    printf("Hexadecimal: %.4X\n", a);
    printf("Octal: %o",a);
    return 0;
}