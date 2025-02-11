#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    if(n>=18 && n==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}