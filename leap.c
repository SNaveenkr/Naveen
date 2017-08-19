#include<stdio.h>
main()
{
int y;
printf("enter the year");
scanf("%d",&y);
if(y%4==0)
printf("%d is leap year", y);
else
printf("%d is not a leap year", y);
}
