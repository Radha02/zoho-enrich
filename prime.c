#include<stdio.h>
int main()
{
    int i,j,m,flag;
    printf("enter number");
    scanf("%d",&m);
    for(i=m+1;i>m;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if((i%j)==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d",i);
            break;
        }
    }   
}
