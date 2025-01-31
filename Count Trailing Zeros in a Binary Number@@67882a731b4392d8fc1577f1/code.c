#include <stdio.h>

int main() {
    int a;
    int b = 0;
    
    scanf("%d", &a);
    while (a&1){
        b++;
        a = a>>1;
    }
    printf("%d", b);
    return 0;
}