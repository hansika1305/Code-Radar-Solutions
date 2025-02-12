#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=(a >> b & 1);
    printf("%d",c);
    return 0;
}