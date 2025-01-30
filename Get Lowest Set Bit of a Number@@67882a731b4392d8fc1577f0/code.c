#include <stdio.h>

int main() {
    int a,b;
    b = 0;
    scanf("%d", &a);
    while (((a>>1) & 1) == 1){
        break;
        b++;
    }

    printf("%d", b);

    return 0;
}