#include<stdio.h>
int main()
{
    char operator;
    double num1,num2;
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter the number 1:");
    scanf("%lf",&num1);
    printf("Enter the number 2:");
    scanf("%lf",&num2);
    switch(operator)
    {
        case'+':
        printf("%2lf+%2lf=%2lf",num1,num2,num1+num2);
        break;
        case'-':
        printf("%2lf-%2lf=%2lf",num1,num2,num1-num2);
        break;
        case'*':
        printf("%2lf*%2lf=%2lf",num1,num2,num1*num2);
        break;
        case'/':
        printf("%2lf/%2lf=%2lf",num1,num2,num1/num2);
        break;
        default:
        printf("ERROR: Invalid input operator.\n");
    }
    return 0;
}