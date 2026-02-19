#include<stdio.h>
#include<string.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    for(int i=0;arr[i]!='@';i++){
             printf("%c",arr[i]);
        }      
    }
    
   
    
