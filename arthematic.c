#include<stdio.h>
void main()
{
    int a,b,sum,sub,div,mult;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    div=a/b;
    mult=a*b;
    printf("\n The sum is :%d",sum);
    printf("\n The subtraction is :%d",sub);
    printf("\n The division is :%d",div);
    printf("\n The multiplication is :%d",mult);
}