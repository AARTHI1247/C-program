#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    char a2[len];
    strcpy(a2,arr);
    char temp;
    for(int i=0;i<len/2;i++){
        temp=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=temp;
    } 
    if(strcmp(a2,arr)==0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }

}
