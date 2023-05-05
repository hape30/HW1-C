#include <stdio.h>
#include <math.h>

int main(){
    int i=0;
    float num, sum=0, arithmetic_mean, mas[1000];
    scanf("%f", &num);
    while (num != 0){
        mas[i] = num;
        scanf("%f", &num);
        i++;
    }
    for (int n=0; n<i; n++){
        sum+=mas[n];
    }
    arithmetic_mean = sum/i;
    printf("%f\n", arithmetic_mean);
    return 0;
}