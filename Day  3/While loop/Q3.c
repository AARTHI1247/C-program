#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int days;
    scanf("%d",&days);
    int i=0;
    int a,c=0;
    while(i<n){
        scanf("%d",&a);
        n =n-a;
        if(n>0){
            c++;
        }
        else{
            break;
        }
        i++;
    }
    printf("Days used:%d\n",c);
    printf("Balance data:%dG",n);
    return 0;
}
