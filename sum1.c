#include<stdio.h>
main()
{
int s,sum=0,i;
scanf("%d",&s);
for(i=0;i<=s;i++)
{
sum=sum+i;
}
printf("sum of first %d natural numbers is %d",s,sum);
}
