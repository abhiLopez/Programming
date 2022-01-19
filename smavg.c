//To read a set of numbers and print the sum and avg
#include<stdio.h>
void main()
	{
		int n,nos[50],sum=0,i;
		float avg;
		printf("Enter a numberin between 1-50: ");
		scanf("%d",&n);
		printf("Enter %d numbers: ",n);
		for(i=0;i<n;++i)
		scanf("%d",&nos[i]);
			for(i=0;i<n;++i)
			{
				sum=sum+nos[i];
				avg=sum/(float)n;
			}
		printf("Sum = %d \n",sum);
		printf("Avg = %f \n",avg);
	}
