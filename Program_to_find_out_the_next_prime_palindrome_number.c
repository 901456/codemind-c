#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,r=0,d,c;
    scanf("%d",&n);
    while(n!=0)
    {
        n++;
        p=n;
        while(p!=0)
        {
            r=r*10;
            r=r+p%10;
            p=p/10;
        }
        if(r==n)
        {
            d=sqrt(n);
            for(c=2;c<=d;c++)
            {
                if(n%c==0)
                {
                    break;
                }
            }
            if(c==d+1)
            {
                break;
            }
        }
        r=0;
    }
    printf("%d ",n);
}