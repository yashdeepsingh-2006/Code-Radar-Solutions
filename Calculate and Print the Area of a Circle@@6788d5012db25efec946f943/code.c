#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d" , &a);
    float area = 3.14*a*a;
    printf("Area: %.2f", a);
    return 0;
}