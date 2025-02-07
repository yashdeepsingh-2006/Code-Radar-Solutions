#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    char output[10] = "Prime"
    if(a>1){
        for( int i = 2, i<n, i++){
            if(n%i == 0){
                output = "Not Prime";
            }
        }
    }else{
        output = "Prime";
    }

    printf("%s", output);
    return 0;
}