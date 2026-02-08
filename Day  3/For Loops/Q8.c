#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int s;
    scanf("%d", &s);
    int arr2[s];
    for (int i = 0; i < s; i++) {
        scanf("%d", &arr2[i]);
    }
    int count=0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < s; j++) {
            if (arr[i] == arr2[j]) {
                count++;
            }
        }
    }
    printf("%d\n", count);
}