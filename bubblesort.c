#include<stdio.h>
void main()
{
    int arr[30];
    int num,ele,found=0,i;
    printf("Enter the number of elements");
    scanf("%d",&num);
    printf("enter the elements");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search");
    scanf("%d",&ele);
    for(i=0;i<num;i++)
    {
        if(arr[i]==ele)
        {
            printf("element found at the index %d element:%d\n",i,ele);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("the element is not an array");
    }
}