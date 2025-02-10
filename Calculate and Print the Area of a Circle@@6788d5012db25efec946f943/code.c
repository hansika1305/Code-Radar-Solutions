#include <stdio.h>
int main()
{
    float radius;
    float pi;
    float area;
    scanf("%f",&radius);
    scanf("%f",&pi);
    area=pi*radius*radius;
    printf("Area: %.2f",area);
    return 0;
}