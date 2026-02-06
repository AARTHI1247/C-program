#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0 && a<9){
        printf("digits");
    }
    else if(a<=65 && a<122){
        printf("Alphabets");
    }
    else if(a<=32 && a<64){
        printf("Special characters");
    }
}