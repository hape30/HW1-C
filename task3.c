#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char password[50];
    int low, punct, alpha, digit, table=1;
    scanf("%s", &password);

    for (int i=0; i<=strlen(password)-1; i++){
        //проверяем  есть ли хотя бы один символ нижнего регистра
        if (islower(password[i])){
            low = 1;
        }
        //проверяем  есть ли хотя бы один символ верхнего регистра
        if (isalpha(password[i])){
            alpha = 1;
        }
        //проверяем  есть ли хотя бы одна цифра
        if (isdigit(password[i])){
            digit = 1;
        }
        //проверяем использование  пунктуации/спец.символ
        if (ispunct(password[i])){
            punct = 1;
        }
        //проверяем каждый символ на 3-е ограничение
        if ( password[i] < 33 || password[i] > 126 ){
            table=0;
        }
    }

    //проверерка паролей по ограничениям
    if ( (strlen(password) < 8 || strlen(password) > 14) || (alpha + digit + low + punct < 3) || table == 0){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}