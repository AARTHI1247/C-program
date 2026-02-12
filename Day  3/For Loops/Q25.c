#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n == 0){
        printf("0");
    }
    else if(n == 1){
        printf("1");
    }
    else{
    int a=0,b=1,c;
    for(int i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
}
}