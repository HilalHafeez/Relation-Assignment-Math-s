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
    printf("ARB={ ");
     switch(rel)
     {
     //relation A to B, a R b iff a divides b
     case 1:
	    for(i=0;i<n;i++)
	    {
		for(j=0;j<m;j++)
		{
		   if(b[j]%a[i]==0)
		   printf("(%d,%d)",a[i],b[j]);
		}
	    }
     break;
     //relation A to B, a R b iff a=b
     case 2:
	    for(i=0;i<n;i++)
	    {
		for(j=0;j<m;j++)
		{
		   if(a[i]==b[j])
		   printf("(%d,%d)",a[i],b[j]);
		}
	    }
     break;
     //relation A to B, a R b iff a=b*b
     case 3:
	    for(i=0;i<n;i++)
	    {
		for(j=0;j<m;j++)
		{
		   if(a[i]==b[j]*b[j])
		   printf("(%d,%d)",a[i],b[j]);
		}
	    }
     break;
     default:
	     printf("\tsorry your input is invalid\t");
     }
     printf(" }");
getch();
}
