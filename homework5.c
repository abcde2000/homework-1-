#include<stdio.h>
int main(void)
{
    int n,i,a;
    for(n=1; n<=500; n++)
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i==n)
        {
            for(a=1; a<=n; a++)
            {
                printf("%d ",n);
            }
            if(a%5==0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
