#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(sp>cp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}