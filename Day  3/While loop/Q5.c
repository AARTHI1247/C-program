#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int c_cancel=0;
    int a,c_success=0;
    while(i<n){
        scanf("%d",&a);
        if(a==0){
            c_cancel++;}
        else if(a==1){
            c_success++;
        }
        i++;
    }
    printf("Successful:%d\n",c_success);
    printf("Cancelled:%d\n",c_cancel);
    if(c_success>c_cancel){
        printf("Status:Safe");
    }
    else if(c_success<c_cancel){
        printf("Status:Risk");
    }
    return 0;
}
