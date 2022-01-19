#include<stdio.h>
void main()
{
	void readarr(int[],int);
	void disarr(int[],int);
	void merge(int[],int[],int[],int,int);
		int a[50],b[50],c[100],m,n;
		printf("Enter the Limit of 1st array: \n");
			scanf("%d",&m);
		//printf("Enter the Elements for 1st array: \n ");
			readarr(a,m);
		printf("Enter the Limit of 2nd array: \n");
			scanf("%d",&n);
		//printf("Enter the Elements for 2nd array:  \n ");
			readarr(b,n);
		merge(a,b,c,m,n);
			printf("\n The Merged Array List is : ");
		disarr(c,(m+n));
		printf("\n");
}
void readarr(int a[],int m)  //reading  of the array
{
	printf("Enter the Elements or No.'s in Non Decreasing Order :\n ");
	int i;	
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	return;
}
void disarr(int s[],int k) //dislay fnctn of prgm
{
	for(int i=0;i<k;i++)
	printf("%d  ",s[i]);
	return;
}
void merge(int a[],int b[],int c[],int m,int n) //merge fnctn of prgm
{
	int i=0,j=0,k=0;
	while(i<m && j<n) //comparison
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k=k+1;			
			i=i+1;			
		}
		else
		{
			c[k]=b[j];
			k=k+1;
			j=j+1;
		}
	}
	 while(i<m) //copying remaining elements from a[]
	   {		
		c[k++]=a[i++];//c[k]=a[i]; k=k+1; i=i+1;	
	   }
	 while(j<n) //copying remaining elements from b[]
	  {
		c[k++]=b[j++];//c[k]=b[j]; k=k+1; i=i+1;
	  }
	return;
}
