#include<stdio.h>

int mian(void)
{
int i,a,sum=0;
for(i=1;i<=5;i++)
{
    a=a*i;
    sum=sum+a;
}
printf("sum=%d\n",sum);
return 0;
}