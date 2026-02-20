#include<stdio.h>
#include<string.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    int length=strlen(arr);
    int c=0;
    for(int i=0;i<length;i++){
    if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
       c++ ;
    } 
}
    printf("%d",c);
}
