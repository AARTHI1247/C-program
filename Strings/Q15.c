#include<stdio.h>
#include<string.h>

int main(){
    char arr[20];
    fgets(arr, sizeof(arr), stdin);
    int c=0;
    for(int i = 0;arr[i] != '\n' && arr[i] != '\0'; i++){
        if(arr[i]==' '){
            c++;
        }
    }   
    printf("%d",c+1);
}
