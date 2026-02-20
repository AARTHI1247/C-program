#include<stdio.h>
#include<string.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    int length=strlen(arr);
    char ch;
    scanf("%c",&ch);
    int c=0;
    for(int i=0;arr[i]!='\n' && arr[i]!='\0';i++){
       if(arr[i]==ch){
       c++ ;
    } }
    if(c==0){
        printf("-1");
    }
    else{
        printf("%d",c);
    }
}
