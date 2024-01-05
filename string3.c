#include<stdio.h>
#include<string.h>
void printev(char str[])
{
    int len=strlen(str);
    printf("given string :");
    for(int i=len-1;i>0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
int ispal(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len\2;i++)
    {
        if(str[i]!=str[len=-i-1])
        {
            return=0;
        }
    }
    return 1;//palindrome
}
int main()
{
    char input[100];
    printf("enter the string");
    scanf("%s",input);
    printrever(input);
    {
        printf("%s is a palidrome",input);
    }
}