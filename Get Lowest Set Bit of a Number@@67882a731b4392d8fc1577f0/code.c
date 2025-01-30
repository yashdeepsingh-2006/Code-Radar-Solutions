#include <stdio.h>

int main() {
    int a,b;
    b = 0;
    scanf("%d", &a);
    // while (((a>>b) & 1) == 1){
    //     break;
    //     b++;
    // }
    while (true) {
        if(((a>>b) & 1) == 1){
            break;
        }
        b++;
    }

    printf("%d", b);

    return 0;
}