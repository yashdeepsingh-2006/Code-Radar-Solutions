#include <stdio.h>

int main() {
    int a,b;
    b = 0;
    int* c = &b;
    scanf("%d", &a);
    while (((a>>b) & 1) == 1){
        break;
        *c += 1;
    }

    printf("%d", b);

    return 0;
}