#include<stdio.h>
int main()
{
    int n,r,sum=0,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        count++;
    }
    printf("%d\n",count);
    printf("%d\n",sum);
}
