#include<stdio.h>
main()
{
int n,sum=0,i;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum of first %d natural numbers is %d",n,sum);
}
