#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int upp=0,low=0,dig=0,sym=0;
    for(int i=0;i<len;i++){
        if(arr[i]>=65 && arr[i]<=90){
            upp++;
        }
        else if(arr[i]>=92 && arr[i]<=127){
            low++;
        }
        else if(arr[i]>=48 && arr[i]<=57){
            dig++;
        }
        else if((arr[i]>=32 && arr[i]<=47) ||(arr[i]>=58 && arr[i]<=64)){
            sym++;
        }
}
printf("Uppercase=%d\n",upp);
printf("Lowercase=%d\n",low);
printf("Digits=%d\n",dig);
printf("Symbols=%d",sym);
}
