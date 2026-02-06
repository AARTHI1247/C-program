#include<stdio.h>
int main(){
    char a[20];
    fgets(a,sizeof(a),stdin);
    printf("%s",a);
}