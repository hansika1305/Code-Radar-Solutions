#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int average;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    average=(a+b+c)/3;
    printf("Average: %.2f",average);
    return 0;
}