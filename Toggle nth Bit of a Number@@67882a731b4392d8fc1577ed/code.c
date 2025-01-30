#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    int n = ~(0>>b) & a;
    printf("%d", n);
    return 0;
}