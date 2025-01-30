#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    int n = ~(a>>b & 1);
    pritnf("%d", n);
    return 0;
}