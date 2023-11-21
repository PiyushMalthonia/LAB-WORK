#include<stdio.h>
void main()
{
    float r;
    printf("enter the radius");
    scanf("%f",&r);
    float area, perimeter;
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("area of circle=%.2f\n", area);
    printf("perimeter of circle=%.2f\n",perimeter);
    float s;
    printf("enter the side");
    scanf("%f",&s);
    float a,p;
    a=s*s;
    p=4*s;
    printf("area of square=%f\n",a);
    printf("perimeter of square=%f\n",p);
    float l,b;
    printf("enter the length and breadth");
    scanf("%f%f",&l,&b);
    float A,P;
    A=l*b;
    P=2*(l+b);
    printf("area of rectangle=%.2f\n",A);
    printf("perimeter of rectangle=%.2f\n",P);
}

        