#include<stdio.h>
#include<math.h>
void table(int a){
    int v;
    for(int i=1;i<=10;i++){
        v=a*i;
        printf("%d x %d= %d\n",a,i,v);
    }  
}
int main(){
    int a;
    scanf("%d",&a);
    table(a);
    return 0;
}
