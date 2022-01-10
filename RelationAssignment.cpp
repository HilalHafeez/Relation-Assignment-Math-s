#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],b[20],i,j,n,m,rel;
   
    printf("enter the number of elements of domain but not more than 20\n");
    scanf("%d",&n);
    printf("enter %d elements of the domain now\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the number of elements of co-domain but not more than 20\n");
    scanf("%d",&m);
    printf("enter %d elements of the co-domain now\n",m);
    for(j=0;j<m;j++)
    {
    scanf("%d",&b[j]);
    }
    printf("Enter 1 for relation a[i] divides b[j]\nEnter 2 for relation a[i]=b[j]\nEnter 3 for relation a[i]=square of b[j]\n");
    scanf("%d",&rel);
     switch(rel)
     {
     //relation A to B, a R b iff a divides b
     case 1:
	 printf("ARB={ ");
	    for(i=0;i<n;i++)
	    {
		for(j=0;j<m;j++)
		{
		   if(b[j]%a[i]==0)
		   printf("(%d,%d)",a[i],b[j]);
		}
	    }
	    printf(" }");
     break;
     //relation A to B, a R b iff a=b
     case 2:
	 printf("ARB={ ");
	    for(i=0;i<n;i++)
	    {
		for(j=0;j<m;j++)
		{
		   if(a[i]==b[j])
		   printf("(%d,%d)",a[i],b[j]);
		}
	    }
	    printf(" }");
     break;
     //relation A to B, a R b iff a*a=b
     case 3:
	printf("ARB={ ");
	    for(i=0;i<n;i++)
	    {
		for(j=0;j<m;j++)
		{
		   if(a[i]*a[i]==b[j])
		   printf("(%d,%d)",a[i],b[j]);
		}
	    }
	    printf(" }");
     break;
     default:
	     printf("\tSORRY YOUR INPUT IS INVALID\t");
     }
     
getch();
}
