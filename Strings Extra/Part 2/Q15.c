#include<stdio.h>
#include<string.h>
int main(){
    char arr1[50];
    fgets(arr1,50,stdin);
    arr1[strcspn(arr1,"\n")]='\0';
    int len1=strlen(arr1);
    char arr2[50];
    fgets(arr2,50,stdin);
    arr2[strcspn(arr2,"\n")]='\0';
    int len2=strlen(arr2);
    int c=0,f;
    if (len1==len2){
        for(int i=0;i<len1;i++){
           for(int j=0;j<len2;j++){
            if(arr1[i]==arr2[j]){
                arr2[j]=0;
                c++;
                break;
            }
        }
    }
    if(c==len1-1){
        printf("Yes");
    }
    else{
        printf("no");
    }
}
    else{
        printf("No");
    }
}
