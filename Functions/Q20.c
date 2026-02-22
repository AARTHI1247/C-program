#include<stdio.h>
#include<math.h>
int calci(int a,int b,char c){
    switch (c)
    {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '*':
        return a*b;
    case '/':
      if(b==0){
        printf("undefined");
        return 0;
      }
      else{
        return a/b;
      }       
    default:
       printf("Invalid operator");
       return 0;
    }
}
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    printf("%d",calci(a,b,c));
    return 0;
}
