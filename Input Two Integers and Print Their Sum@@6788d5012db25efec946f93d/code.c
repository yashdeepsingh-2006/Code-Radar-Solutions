#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", a,b);
    int sum = a+b;
    printf("%d", sum);
    return 0;
}