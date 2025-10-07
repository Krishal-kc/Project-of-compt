#include <stdio.h>
int main()
{
    int a, b , c, d;
    printf("Enter the first number : \n");
    scanf("%d", &a);
    printf("Enter the second number : \n");
    scanf("%d", &b);
    c = (a+b);
    d = (a-b);
    printf("The sum of the two numbers is %d\n", c);
    printf("The differnce between the two numbers is %d\n", d);
    return 0;
}