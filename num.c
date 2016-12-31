#include<stdio.h>
int main()
{
	int a[20],k,n,i,count=0;
	printf("enter size");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(k== a[i])
		{
			count++;
		}
	}
	printf("%d",count);
    return 0;
} 
	
