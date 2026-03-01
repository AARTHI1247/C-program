#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int c=1,f;
    for(int i=0;i<len;i++){
        f=0;
        for(int j=i+1;j<len;j++){
           if(arr[i]==arr[j]){
            f=1;
            break;
        }     
    }
    if(f==0){
        printf("%c",arr[i]);
        break;
    }
}
}
