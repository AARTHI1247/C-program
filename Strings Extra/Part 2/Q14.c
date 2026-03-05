#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int left,right,f,c=0;
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            left=i;
            right=j;
            f=1;
            while(left<right){
                if(arr[left]!=arr[right]){
                    f=0;
                    break;
                }
                else{
                    f=1;
                }
            left++;
            right--;
        }
        if(f==1){
            c++;
        }
    }
}
printf("%d",c);
}
