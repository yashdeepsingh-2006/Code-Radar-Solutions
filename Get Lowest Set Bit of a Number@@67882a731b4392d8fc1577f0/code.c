#include <stdio.h>

int main() {
    int a,b;
    b = 0;
    scanf("%d", &a);
    while (((a>>b) & 1) == 1){
        b++;
    }

    printf("%d", b);

    return 0;
}