#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d", (1<<b)|a);
    
    return 0;
}