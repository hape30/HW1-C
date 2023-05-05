#include <stdio.h>

int main(){
    int a, i=0;
    int b[1000];
    scanf("%d", &a);
    if (a < 0){
        printf("-");
    }
    while (a != 0){
        b[i]=abs(a)%2;
        a=abs(a)/2;
        i++;
    }
    for (int n=0; n< i; n++){
        printf("%d", b[i-n-1]);
    }
    printf("\n");
    return 0;

}