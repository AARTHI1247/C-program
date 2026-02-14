#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int i=0;
    int c1=0,c2=0;
    int a;
    while(i<n){
        scanf("%d",&a);
        if(a>=70){
            c++;
            c1++;
        
            if(c1>c2){
              c2=c1;
        }
    }
        else{
            c1=0;
        }
        i++;
    }
    return 0;
}
