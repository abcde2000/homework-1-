#include<stdio.h>
int main(void)
{
    int i=1,n,sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);

    while(i<=n)
{
    sum+=i;
    i++;
}
printf("sum is %d",sum);

return 0;
}