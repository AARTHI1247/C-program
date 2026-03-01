#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    for(int i=0;i<strlen(arr);i++){
        if(i%2==0){ 
            printf("%c ",arr[i]);
        }   
    } 
}
