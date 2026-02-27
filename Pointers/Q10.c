#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    char *p=arr;
    int c=1;
    for(int i=0;i<strlen(arr);i++){
        if(*(p+i)==' '){
            c++;
        }
       
    }
        printf("%d",c);    
}
