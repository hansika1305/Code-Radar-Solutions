#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a!=b && b!=a){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}