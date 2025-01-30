#include <stdio.h>

int main() {
    int a,b;
    b = 0;
    scanf("%d", &a);
    while true{
        if(((a>>b)&1)==1){
            break;
        }
        b++;
    }

    printf("%d", b);

    return 0;
}