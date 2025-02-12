#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    if(a & 0X8000000){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}