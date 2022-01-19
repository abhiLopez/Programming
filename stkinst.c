#define size 10
#include<stdio.h>
#include<stdlib.h>
 int stk[size];
 int front=0;
 int rear=0;
 int start;
void main()
{
	void insert(int);
	int delete();
	int search(int);
	int option,item,k;
	do
	{
		printf(" Insertion\n");
		printf(" Deletion\n");
		printf(" Search\n");
		printf(" Exit\n");
		printf("Enter Your Option: \n")
		scanf("%d",&option);
	if(option==1);
	{
		printf("Enter the Item \n");
		scanf("%d",&item);
		insert(item);
	}
	else if (option==2)
	{
		item=delete();
	if(start==1)
		printf("Deleted item is: %d\n",item);
	}
	else if (option==3)
	{
		printf("Enter the value to be Search\n");
		scanf("%d",&item);
		k=search(item);
	if(k==0)
		printf("Item Not Found \n");
	}
	else
	{	
	 exit(1);
	}
	while(1);
}
void insert(int n)
{
	int t;
	t=(rear+1)%size;
	if(front==t)
	 {
		printf("The Queue is full \n");
		return;
	 }
	 rear=t;
	 stk[rear]=n
}
int delete()
{
	 int r;
	 if(front==rear)
	  {
		printf("The Queue is Empty\n");
	  }
	 else
	 {
		front=(front+1)%size;
		start=1
	 return stk[front];
	 }
}
int search(int sr)
{
	 int f,r;
	 while(f!=r)
	 { 
	   f=(f+1)%size
	 if(stk[f]==sr)
	  {
		printf("Item Found ");
	 return(1);
	  }
	 }
	return 0;
}
