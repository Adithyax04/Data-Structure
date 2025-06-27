#include<stdio.h>
void push(int,int [],int);
void pop(int,int []);
void display(int,int []);
int top=-1;
void main()
{
	int n,a[100],c,item;
	printf("enter the size of stack : ");
	scanf("%d",&n);
	do{
	  printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	  printf("enter your choice : ");
	  scanf("%d",&c);
	switch(c)
	{
		case 1:printf("enter the item to be inserted : ");
			scanf("%d",&item);
			push(n,a,item);
			break;
		case 2:pop(n,a);
			break;
		case 3:display(n,a);
			break;
		case 4:
			break;	
		default:printf("enter valid choice \n");	
	}
	}while(c!=4);
}

void push(int n,int a[100],int item)
{
	if(top==n-1)
	{
	 printf("stack is full");
	}
	else if(top==-1)
	{
	 top=0;
	 a[top]=item;
	}
	else
	{
	  top=top+1;
	  a[top]=item;
	}
}


void pop(int n,int a[100])
{
	if(top==-1)
	{
	 printf("stack is empty");
	}
	else if(top==0)
	{
	 printf("The deleted element is %d",a[top]);
	 top=-1;
	}
	else
	{
	  top=top-1;
	}
}

void display(int n,int a[100])
{
	int i;
	if(top==-1)
	{
	  printf("The stack is empty \n");
	}
	else
	{
	printf("The Remaining stack are \n");
	for(i=0;i<=top;i++)
	{
	 printf("%d",a[i]);
	 printf("\n");
	}
	}
}
