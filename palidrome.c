#include<stdio.h>
int main()
{
    int num,rev=0,rem,n;
    printf("enter an integer number");
    scanf("%d",&num);
    n=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(n==rev)
    printf("it is palidrome");
    else
    printf("reverse number=%d",rev);
    return 0;
}