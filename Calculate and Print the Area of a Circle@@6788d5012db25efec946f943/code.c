#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f" , &a);
    float area = (float) (3.14*a*a);
    printf("Area: %.2f", area);
    return 0;
}