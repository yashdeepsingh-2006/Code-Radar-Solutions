#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f %f", &a, &b);
    float output = a*b;
    printf("Product: %.2f", output);
    return 0;
}