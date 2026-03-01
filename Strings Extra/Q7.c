#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int c=0,temp=0;
    int*arr2=(int*)malloc(len*sizeof(int));
    for(int i=0;i<len;i++){
        arr2[i]=0;
        
    }
    for(int i=0;i<len;i++){
        if(isalpha(arr[i])){ 
            arr2[i]=arr[i];
        }   
    } 
    for(int i=0;i<len/2;i++){
        temp=arr2[i];
        arr2[i]=arr2[len-1-i];
        arr2[len-1-i]=temp;
    }
    for(int i=0;i<len;i++){
        printf("%c",arr2[i]); 
} 
  
}
