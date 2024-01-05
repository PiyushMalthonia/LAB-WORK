#include<stdio.h>
#include<math.h>
int main()
{
  int start, end, number, originalnumber, remainder, result, n;
  printf("Enter the starting number: ");
  scanf("%d",&start);
 printf("Enter the ending number: ");
 scanf("%d", &end);
 printf("Armstrong numbers between %d and %d are:", start, end);
 for(number = start; number<=end; ++number){
    originalnumber = number;
    n = 0;
    result=0;
    while(originalnumber !=0){
        originalnumber /=10;
        ++n;
    }
    originalnumber=number;
    while(originalnumber !=0){
    remainder = originalnumber % 10;
    result += pow(remainder, n);
    originalnumber /= 10;
 }
 if (result==number){
    printf("%d",number);
 }
}
  printf("\n");
  return 0;
}
 