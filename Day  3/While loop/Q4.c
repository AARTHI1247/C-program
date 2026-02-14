#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int maxc=0;
    int a,c=0;
    while(i<n){
        scanf("%d",&a);
        if(a==0){
            c++;
            if(c>maxc){
                maxc=c;
            }
        }
        else{
            c=0;
        }
        i++;
    }
    printf("Longest failure streak:%d",c);
    return 0;
}
