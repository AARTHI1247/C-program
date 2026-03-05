#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int c=0;
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++ ){
            c++;
        }
    }
    printf("%d",c);
}
