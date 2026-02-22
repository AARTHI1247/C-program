#include<stdio.h>
#include<math.h>
void leapyear(int year){
    if((year%4==0 && year%100!=0)||(year%400==0)){
        printf("Leap year");
    }
    else{
        printf("not Leap year");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    leapyear(a);
    return 0;
}
