#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a+b>c && b+c>a && a+c>b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}