#include<stdio.h>

int main(void)
{
int i,a=1,sum=0;
for(i=1;i<=5;i++)
{
    a=a*i;
    sum=sum+a;
}
printf("sum=%d\n",sum);
return 0;
}





#include<stdio.h>
int main(void)
{
    int n,i,f1=1,f2=1,f3;
    printf("Enter n:\n");
    scanf("%d",&n);

    printf("%d%d",f1,f2);
    for(i=3;i<=n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;

        printf("%d",f3);

    }
     return 0;
