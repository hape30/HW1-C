#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++) {
        if (arr[i] > 0) {
            b++;
        }
    }
    printf("%d", b);
}