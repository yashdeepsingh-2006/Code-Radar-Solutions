#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    int msb = a>>(sizeof(int)*8 -1) & 1;
    if (msb){
        printf(
            "Set"
        );
    }else{
        printf("Not Set");
    }
    return 0;
}