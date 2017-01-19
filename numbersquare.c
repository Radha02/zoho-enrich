#include<stdio.h>
int main()
{
    int a[10][10],i,j,k,l;
    char ch;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    a[0][0] = ' ';
    for(i=0;i<4;i++)
    {
        printf("\n---------------\n");
        printf("|");
        for(j=0;j<4;j++)
        {
            if(a[i][j] == ' ')
            {
                printf("%c",a[i][j]);
            }
            else
            {
                printf("%d",a[i][j]);
            }
            printf("|");
        }
    }
    printf("\n---------------\n");
    i=0,j=0;
    a[0][0]= ' ';
    while(ch != '\0')
    {
        printf("press U -> up D -> down L -> left R -> right Q -> quit\n");
        printf("enter a character");
        scanf("%c",&ch);
        switch(ch)
        {
            case 'U':   if(i!=0)
                        {
		            	    a[i][j]=a[i-1][j];
			                i = i-1;
			                a[i][j]=' ';
                        }
		            	break;
			case 'D':   if(i!=3)
			            {
			                a[i][j]=a[i+1][j];
			                i = i+1;
			                a[i][j]=' ';
		            	}
		            	break;
			case 'L':  if(j!=0)
			           {
			               a[i][j]=a[i][j-1];
			               j= j-1;
			               a[i][j]=' ';
			           }
			           break;
			case 'R':   if(j!=3)
			            {
			                a[i][j]=a[i][j+1];
			                j= j+1;
			                a[i][j]=' ';
			            }
			            break;
			case 'Q':
			            break;			
		}
		for(k=0;k<4;k++)
		{
		    printf("\n---------------\n");
            printf("|");
		    for(l=0;l<4;l++)
		    {
		      if(a[k][l]== ' ')
		      {
		          printf("%c",a[k][l]);
		      }
		      else
		      {
		          printf("%d",a[k][l]);
		      }
		      printf("|");
		    }
		}
		printf("\n---------------\n");
    }
}
