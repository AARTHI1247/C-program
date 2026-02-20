#include<stdio.h>
#include<string.h>

int main(){
    char arr[20];
    fgets(arr, sizeof(arr), stdin);

    char ch[20];
    int i;

    for(i = 0; arr[i] != '\n' && arr[i] != '\0'; i++){
        ch[i] = arr[i];
    }

    ch[i] = '\0';   

    printf("%s", ch);
}
