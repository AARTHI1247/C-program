#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    //printf("%d",len);
    int c=0,f;
    for(int i=0;i<len;i++){
        f=0;
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                f=1;
                break;
            }
        }
        if(f){
            printf("No");
            break;
        }
        else if(f==0){
            c++;
            if(c==len){
               printf("Yes");
               break;
            }
        } 
    }
}

