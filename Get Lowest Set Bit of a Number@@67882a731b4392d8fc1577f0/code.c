#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,n;
    b = 0;
    scanf("%d", &a);
    while (a>>b & 1 == 1){
        b++;
    }

    printf("%d", b);

    return 0;
}