
#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int vc=0,conc=0;
    for(int i=0;i<len;i++){
        if(arr[i]=='A'||arr[i]=='E'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
            vc++;
        }
        else{
            conc++;
        }
    }
    printf(vc==conc?"Yes":"NO");
}
