#include <stdio.h>
int main(){
    int  i,j,a;
    scanf("%d", &a);

    for(i = 0; i<a; i++){
        for(j = 0; j<a; j++){
            printf("* ");
        }
    }

    return 0;
}