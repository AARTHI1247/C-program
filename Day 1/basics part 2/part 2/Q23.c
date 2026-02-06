int main(){
    int a;
    scanf("%d",&a);
    char c=(a>0)?"Positive":(a<0)?"negative":"zero";
    printf("%s",c);
}