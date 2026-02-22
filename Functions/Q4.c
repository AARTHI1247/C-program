#include<stdio.h>
#include<math.h>
float area(int r){
    float ar=3.14*r*r;
    return ar;
}
int main(){
    int a;
    scanf("%d",&a);
    float ans=area(a);
    printf("%.2f",ans);
    return 0;
}
