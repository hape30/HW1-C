#include <stdio.h>

int main() {
    int n, null = 0, upnull = 0, dowmnnull = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            upnull++;
        }
        if (arr[i] == 0) {
            null++;
        }
        if (arr[i] < 0) {
            dowmnnull++;
        }
    }
    printf("%d %d %d", null, upnull, dowmnnull);
}