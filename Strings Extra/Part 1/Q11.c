#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int c,max=0,val=0;
    for(int i=0;i<len;i++){
        if(arr[i]!=' '&&(i==0||arr[i-1]==' '));
        c=0;
        for(int j=i;j<len;j++){
            if(arr[j]!=' '){
                c++;
            }
            else{
                break;
            }
        }
        if(c>max){
            max=c;
            val=i;
        }
    }
    for(int i=val;i<=val+max;i++){
        printf("%c",arr[i]);
    }

}
