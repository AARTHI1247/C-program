#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int c,max=0,sec_max=0;
    char max_c,sec_max_c;
    for(int i=0;i<len;i++){
        if(arr[i]!=0){
        c=1;
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
                c++;
            }
        }
        if(c>max){
            sec_max=max;
            sec_max_c=max_c;
            max=c;
            max_c=arr[i];
        }
        else if(c>sec_max){
            sec_max=c;
            sec_max_c=arr[i];
        }
    }
}
printf("%c",sec_max_c);
}

