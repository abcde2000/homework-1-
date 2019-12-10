#include<stdio.h>
int main(void)
{
    int a,b,c;
    for(a=0;a<=100/5;a++)
    for(b=0;b<=100/3;b++)
    for(c=0;c<=100*3;c++)
    {
        if(a*5+b*3+c/3==100&&a+b+c==100&&c%3==0){
            printf("a=%d,b=%d,c=%d\n",a,b,c);
        }
    }
    return 0;
}