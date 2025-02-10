#include <stdio.h>
int main()
{
    char a[100];
    char b[100];
    int c;
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%d",&c);
    print("Name: %s",a);
    print("Age: %d",c);
    print("Hobby: %s",b);

    return 0;
}