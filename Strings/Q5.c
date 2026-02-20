#include<stdio.h>
#include<string.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    int length=strlen(arr);
   // printf("%d",length);
    char arr2[20];
    strcpy(arr2,arr);
    int temp;
    for(int i=0;i<length-1;i++){
        temp=arr[i];
        arr[i]=arr[length-1-i];
        arr[length-1-i]=temp;
    }
    if(strcmp(arr,arr2)==0){
        printf("Palindrome");
    }
    else{
        printf("not a palindrome");
    }
}
