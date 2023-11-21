#include<stdio.h>
void main()
{
    int ch;
    int r;
    int s;
    int l,b;
    float area,peri;
    float are,per;
    float ar,pe;
    printf("1.Circle \n 2.Square \n 3.Rectangle \n Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
     printf("Enter the radius");
     scanf("%d",&r);
     area=3.14*r*r;
     peri=3.14*2*r;
     printf("Area of circle=%f",area);
     printf("Perimeter of circle=%f",peri);
     break;
     case 2:
     printf("Enter the side");
     scanf("%d",&s);
     are=s*s;
     per=4*s;
     printf("Area of square=%f",are);
     printf("Perimeter of square=%f",per);
     break;
     case 3:
     printf("Enter the value");
     scanf("%d%d",&l,&b);
     ar=l*b;
     pe=2*(l+b);
     printf("Area of rectangle=%f",ar);
     printf("Perimeter of rectangle=%f",pe);
     break;
    }
}