#include <stdio.h>
int main()
{
    char a[100];
    int c;
    char b[100];
    scanf("%s",&a);
    scanf("%d",&c);
    scanf("%s",&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",c);
    printf("Hobby: %s",b);

    return 0;
}