#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int c=0,f,name=0;
    for(int i=0;i<len;i++){
        if(arr[i]!=0){
        f=0;
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
                f=1;
                break;
            }
        }
        if(f==0){
            c++;
            if(c==2){
               printf("%c",arr[i]);
               break;
            }
        } 
    }
    }
}
