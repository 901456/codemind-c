#include<stdio.h>
int main()
{
    int n,i,j,k,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-1;j++)
        {
            printf("%d",j);
            if(j==n-2)
            {
                m=j;
                for(k=1;k<m;k++)
                {
                    printf("%d",k);
                }
            }
        }
        printf("
");
    }
}