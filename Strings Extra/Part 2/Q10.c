#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int twochar_c=0,schar_c=0,f=0;
    for(int i=0;i<len;i++){
        if(arr[i]!=0){
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
                twochar_c+=2;
                break;
            }
            else if(arr[i]!=arr[j]){
                schar_c++;
            }
        }
    }
}
if(twochar_c==len-1){
    printf("Yes");
}
else if(schar_c!=1){
    printf("no");
}
}
