#include <stdio.h>

int main() {
    int a,b;
    b = 0;
    scanf("%d", &a);
    while true{
        if(a&1 == 1){
            break;
        }
        else{
            b++;
            a>>1;
        }
    }

    printf("%d", b);

    return 0;
}