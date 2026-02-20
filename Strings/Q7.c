#include<stdio.h>
#include<string.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    int length=strlen(arr);
    int c=0;
    for(int i=0;i<length-1;i++){
    if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]==' '||(arr[i]>=0 && arr[i]<=9)){
       continue;
    } 
    else{
        c++;
    }
}
    printf("%d",c);
}
