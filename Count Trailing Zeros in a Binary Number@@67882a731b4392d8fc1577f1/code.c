#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b = 0;

    while (true){
        if (((a)|0) == 0){
            b++;
            break
        }else{
            a>>1;
        }
        printf("%d", b);
    }
    return 0;
}