#include<stdio.h>
int compare(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        return a;
    }
    else{
        return b;
    }
    }
int main(){
    int result=compare();
    printf("%d",result);
    return 0;
}
