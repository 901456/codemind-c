#include<stdio.h>
int main()
{
    int n,sum=0,temp=10;
    scanf("%d",&n);
    while(temp/10!=0)
    {
        if(n==0)
        {
            temp=sum;
            n=sum;
            sum=0;
        }
        else
        {
            sum+=n%10;
            n=n/10;
        }
    }
    printf("%d",temp);
}