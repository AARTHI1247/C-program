#include<stdio.h>
void even_or_odd(){
    int a;
    scanf("%d",&a);
    if(a%2==0){
     printf("even");
    }
    else{
        printf("odd");
    }
    }
int main(){
    even_or_odd();
    return 0;
}
