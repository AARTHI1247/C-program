#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int c,name,f;
    for(int i=0;i<len;i++){
        if(arr[i]!=0){
        c=1,f=0; 
        for(int j=i+1;j<len;j++){
            if(arr[i]!=0 &&(arr[i]==arr[j])){
                arr[j]=0;
                c++;
                f=1;
            } 
        } 
        if(f);
        printf("%c%d",arr[i],c);
    }
}
}
