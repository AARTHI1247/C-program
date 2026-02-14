#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int current;
    scanf("%d",&current);
    int i=0;
    int a,c=0;
    while(i<n){
        scanf("%d",&a);
        current=current+a;
        if(a>0 && a<=2000){
            c++;
        }
        i++;
    }
    printf("Low Balance Days:%d\n",c);
    printf("Final Balance:%d",current);
    return 0;
}
