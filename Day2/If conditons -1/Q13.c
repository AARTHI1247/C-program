#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
       if(a>90 && a<99){
         printf("Grade A");
    }
       else if(a>=75 && a<90){
         printf("Grade B");
    }
       else if(a>=60 && a<74){
         printf("Grade C");
    }
}
   else if(a<0){
      printf("invalid input");
}
}