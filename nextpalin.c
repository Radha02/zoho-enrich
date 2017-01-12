#include <stdio.h>
int main()
{
    int n,i,r,rev,a;
    printf("enter number");
    scanf("%d",&n);
     for(i=n+1;i>n;i++)
    {
        a=i;
        r=0;
        rev=0;
        while(a>0)
        {
            r = a%10;
            rev = (rev*10)+r;
            a = a/10;
        }
        if(rev == i)
        {
            printf("%d",i);
            break;
        }
    }
}
