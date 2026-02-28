#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int f;
    for(int i=0;i<len;i++){
        f=0;
        if(arr[i]==arr[len-1-i]){
        f=1;
    }
}
    if(f){
        printf("Yes");
    }
    else{
        printf("No");
    
    }
}

