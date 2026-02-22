#include<stdio.h>
#include<math.h>
void perfect(int a){
    int sum=0;
    for(int i=1;i<a;i++){
         if(a%i==0){
            sum=sum+i;
         }
    }
    if (sum==a){
        printf("Perfect Number");
    }
    else{
        printf("Not Perfect number");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    perfect(a);
    return 0;
}
