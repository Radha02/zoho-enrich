#include<stdio.h>
int main()
{
    int i,j,n,a[100],f=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(f<a[i])
            {
                s=f;
                f=a[i];
            }
            else if(s<a[i])
            {
                s=a[i];
            }
        }    
    }
  printf("%d",s);
  return 0;
}
