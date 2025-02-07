#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    if(a-b < 0){
        printf("Profit");
    }else if (a-b == 0){
        printf("No Profit");
    }else{
        printf("Loss");
    }
    return 0;
}