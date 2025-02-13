#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a == 2){
        printf("28");
    }else if(a%2 == 0){
        if(a == 12){
            printf("31");
        }
        printf("30");
    }else if(a>12){
        printf("Invalid month");
    }else{
        printf("31");
    }

}