#include<stdio.h>
void main()
{
    int i,num;
    printf("Enter the number we want to find cube");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("Cube=%d",i*i*i);
    }
}