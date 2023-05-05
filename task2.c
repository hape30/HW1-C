#include <stdio.h>

int main(){
    int a, b, result;
    scanf("%d %d", &a, &b);
    for (int i=1; i<a; i++){
        printf("   ");
    }
    //блок с числами
    for (int i=1; i<=b; i++){
        //максимум в строке 7 чисел 
        if (a == 8){
            printf("\n");
            a = 1;
        }
        
        if (i/10!= 0){
            printf("%d ", i);
        } else{
            printf(" %d ", i);
        }

        a += 1;
    }

    printf("\n");
    return 0;
}