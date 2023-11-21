#include<stdio.h>
#include<math.h>
void main()
{
    float r,h,g;
    printf("Enter the r and h");
    scanf("%f%f",&r,&h);
    g=r+sqrt(h*h+r*r)*3.14*r;
    printf("total surface area of cone=%f\n",g);
    float b,c,m;
    printf("Enter the b and c");
    scanf("%f%f",&b,&c);
    m=0.3*(3.14*b*b*c);
    printf("volume of cone=%f\n",m);
}