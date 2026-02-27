#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    char a2[100];
    char *p=arr;
    for(int i=0;i<strlen(arr);i++){
        a2[i]=*(p+(strlen(arr)-1)-i);
    }
    a2[strlen(arr)] = '\0';
    if(strcmp(arr,a2)==0){
        printf("Yes");
    } 
    else{
        printf("No");
    } 
}
    
