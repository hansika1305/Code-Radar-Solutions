#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(b>a){
        printf("Profit");
    }
    else if(a>b){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}