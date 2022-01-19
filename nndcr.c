//To read a set of numbers and arrange them in non decreasing order
#include<stdio.h>
int main()
	{
		int n,nos[50],j,i,min,loc;
		printf("Enter a numberin between 1-50: ");
		scanf("%d",&n);
		printf("Enter %d numbers \n",n);
		for(i=0;i<n;++i)
		{
		scanf("%d",&nos[i]);
		}		
		for(i=0;i<n;i=i+1)
		{
		   min=nos[i],loc=i;
		}
		for(j=n+1;j<n;j=j+1)
		{
			if(nos[j]<min)
			{
			  min=nos[j];
			  loc=j;
			}
		   nos[loc]=nos[i];
		   nos[n]=min;
		}
		printf("Sorted order is = ");
		for(i=0;i<n;++i)
		{
		  printf("%d ,",nos[i]);
		}
		printf("\b \n");
	}
		
