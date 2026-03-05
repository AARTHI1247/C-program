#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    char a1[50],a2[50],maxarr[50];
    int c=0,max=0,j=0,k=0;
    for(int i=len;i>=0;i--){
        if(arr[i]!=' ' && arr[i]!='\0'){
            c++;
        a1[j]=arr[i];
        j++;
    }
    else{
        a1[j]='\0';
        k=0;
        for(int m=c-1;m>=0;m--){      
            a2[k]=a1[m];
            k++;
        }
        a2[k]='\0';
        if(strcmp(a1,a2)==0){
            if(c>max){
                max=c;
                for(int p=0;p<c;p++){
                   maxarr[p]=a2[p]; 
                }
                maxarr[c]='\0';
            }
        }
        c=0;
        j=0;
    }
    }
    printf("%s",maxarr);
}
