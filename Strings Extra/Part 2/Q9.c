#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int c,max=0;
    char max_c,val;
    for(int i=0;i<len;i++){
        c=1;
        if(arr[i]==arr[i+1]){
            c++;
            val=arr[i-1];
        } 
    } 
    if(max<c){
        max=c;
        max_c=val;
    }     

printf("%c",max_c);
}
