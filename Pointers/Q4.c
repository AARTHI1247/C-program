#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    char a2[100];
    char *p=arr;
    for(int i=0;i<strlen(arr);i++){
        a2[i]=*(p+i);
    }
     a2[strlen(arr)] = '\0';
    for(int i=0;i<strlen(arr);i++){
        printf("%c",a2[i]);
    }
    
}
