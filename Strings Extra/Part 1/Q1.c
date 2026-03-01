#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    int count=0;
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
           count++; 
        }     
    } 
    printf("%d",count);
}
