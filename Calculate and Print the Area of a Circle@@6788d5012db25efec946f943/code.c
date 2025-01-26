#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d" , &a);
    float area = (float) (3.14*a*a);
    printf("Area: %.2f", area);
    return 0;
}