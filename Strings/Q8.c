#include<stdio.h>
#include<string.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    int length=strlen(arr);
    int c=0;
    for(int i=0;i<length-1;i++){
    if(arr[i]==' '){
        c++;
    } 
}
    printf("%d",c);
}
