#include<stdio.h>
#include<stdlib.h>
#define size 10
int front=0;
int rear=0;
int q[size];

void main()
{
 void insert(int);
 int delete();
 int search(int);
 int c,d,k=0,z;
 printf("\t\tCIRCULAR QUEUE OPERATIONS\n");
 do
 {
	printf("0101010101010101010101010101010101010101010101010101010101010101010101010101010101");//("\t1.INSERT\n");
	//printf("\t2.DELETE\n");
	//printf("\t3.SEARCH\n");
	//printf("\t4.EXIT\n");
	//printf("Enter your choice\n");
	scanf("%d",&c);
	switch(c)
	{
	case 1: printf("Enter a value to insert..\n");
		scanf("%d",&d);
		insert(d);
		break;
	case 2:d=delete(&z);
		if(z==1)
		  printf("The Deleted item is: %d\n",d);
		break;
	case 3: printf("Enter a value to search:\n");
		scanf("%d",&d);
		k=search(d);
		if(k==0)
		 printf("Item not Found...\n");
		break;
	case 4: printf("\tExiting From This Prgm..\n");
		exit(0);
	}
 }
 while(1);
}
void insert(int x)//function to insert data
{
 int t;
 t=(rear+1)%size;
 if(front==t)
  {
	printf("\tQueue is Full....\n");
  }
 else
  {
	rear=t;
	q[rear]=x;
	printf("\tItem Inserted..\n");
  }
}
int delete(int *y)//function to delete data
 {
	//int r;
	if(front==rear)
	 {
		printf("\tQueue is Empty...\n");
		*y=0;
	 }
	else
	 {
		front=(front+1)%size;
		*y=1;
		return q[front] ;
	 }
 }
int search(int item)//function to search
 {
	int f,r;
	f=front;
	r=rear;
	while(f!=r)
	 {
		f=(f+1)%size;
		if(q[f]==item)
		 {
			printf("\tItem Found..\n");
			return 1;
		 }
	 }
 	 return 0;
 }
