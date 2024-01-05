#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    int x;
    printf("1=Addition 2=Subtraction 3=Multiplication 4=Division");
    scanf("%d",&x);
    if(x==1)
    {
        c=a+b;
        printf("Addition: %d",c)
    }
    else if(x==2)
    {
        c=a-b;
        printf("Subtraction: %d",c);
    }
    else if(x==3)
    {
        c=a*b;
        printf("Multiplication: %d",c);
    }
    else if(x==4)
    {
        if(b==0)
            printf("Infinity");
    }
        else
        {
            c=a/b;
            printf("Division: %d",c);
        }
    }
