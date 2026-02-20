#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    int c=0;
    for(int i=0;i<arr[i] != '\n' && arr[i] != '\0';i++){
       if(isdigit(arr[i])){
        c++;
       }
    } 
    printf("%d",c);
}
