#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    if(n==1){
        printf("Monday");
    }
    else if(n==2){
        printf("Tuesday");
    }
    else(n==3){
        printf("Wedenesday");
    }
    else if(n==4){
        printf("Thursday");
    }
    else if(n==5){
        printf("Friday");
    }
    else if(n==6){
        printf("Saturday");
    }
    else{
        printf("Sunday");
    }
}