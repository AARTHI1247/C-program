#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    char a2[100];
    fgets(a2,sizeof(a2),stdin);
    a2[strcspn(a2,"\n")]='\0';
    char *p=a2;
    for(int i=0;i<strlen(arr);i++){
        arr[len+i]=*(p+i);
    }
    a2[len+strlen(a2)] = '\0';
    for(int i=0;i<strlen(arr);i++){
         printf("%c",arr[i]); 
    }
    }
    
