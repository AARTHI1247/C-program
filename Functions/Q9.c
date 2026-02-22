#include<stdio.h>
#include<math.h>
int reverse(int n){
    int rev=0;
    if(n<0){
        n=n*(-1);
    }
    while(n>0){
        int dg=n%10;
        rev=rev*10+dg;
        n=n/10;
    }
    return rev;
}
int main(){
    int a;
    scanf("%d",&a);
    int temp=a;
    if(a<0){
        if(temp==(-1)*reverse(a)){
            printf("Palindrome");
        }
        else{
            printf("Not a Palindrome");
        }
    }
    else{
        if(temp==reverse(a)){
            printf("Palindome");
        }
        else{
            printf("Not Palinrome");
        }
}
    return 0;
}
