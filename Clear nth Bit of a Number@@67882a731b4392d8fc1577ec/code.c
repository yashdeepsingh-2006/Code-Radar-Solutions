#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    int n = ~(1<<b) & a;
    pritnf("%d", n);
    return 0;
}