#include <stdio.h>

int main(){
    int m, y;
    scanf("%d %d", &m, &y);
    // Избавимся от января
    if ( m == 2 && y % 4 == 0 && (y % 100 != 0 || y % 400 == 0) ){
        printf("29\n");
    }
    //проверка что год невисокосный и в феврале 28 дней
    else if ( m == 2 ){
        printf("28\n");
    }
    // в апреле, июне, сентябре, ноябре по 30 дней
    else if ( m ==  4 || m  == 6 || m  == 9 || m == 11){
        printf("30\n");
    }
    //оставшиеся месяца имеют по 31 дню
    else{
        printf("31\n");
    }
    return 0;
}