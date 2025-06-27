#include<stdio.h>
void inject(int,int [],int);
void push(int,int [],int);
void eject(int,int []);
void pop(int,int []);
void display(int,int []);
int front=-1,rear=-1;
void main()
{
 int n,a[100],c,item;
 printf("enter the size of queue : ");
 scanf("%d",&n);
 do
 {
   printf("\n1.INJECT\n2.PUSH\n3.EJECT\n4.POP\n5.DISPLAY\n6.EXIT\n");
   printf("enter your choice : ");
   scanf("%d",&c);
   switch(c)
   {
    case 1:printf("enter item to be inserted : ");
    	   scanf("%d",&item);
    	   inject(n,a,item);
    	   break;
    case 2:printf("enter item to be inserted : ");
    	   scanf("%d",&item);
    	   push(n,a,item);
    	   break;
    case 3:eject(n,a);
    	   break;
    case 4:pop(n,a);
    	   break;
    case 5:display(n,a);
    	   break;
    case 6:
           break;	   	   
    default:printf("enter valid choice \n");
   }
 }while(c!=6);
}

void inject(int n,int a[100],int item)
{
  int i;
  if(rear==n-1&&front==0)
  {
   printf("The Queue is full \n");
  }
  else if(front==-1&&rear==-1)
  {
   front=0;rear=0;
   a[rear]=item;
  }
  else if(rear==n-1)
  {
    for(i=front;i<=rear;i++)
    {
     a[i-1]=a[i];
    }
    a[rear]=item;
  }
  else
  {
    rear=rear+1;
    a[rear]=item;
  }
}

void push(int n,int a[100],int item)
{ 
  int i;
  if(rear==n-1&&front==0)
  {
   printf("The Queue is full \n");
  }
  else if(front==-1&&rear==-1)
  {
   front=0;rear=0;
   a[front]=item;
  }
  else if(front>0)
  {
    front=front-1;
    a[front]=item;
  }
  else
  {
   for(i=rear;i>=0;i--)
   {
     a[i+1]=a[i];
     }
     a[front]=item;
  }
}

void eject(int n,int a[100])
{
  if(rear==-1&&front==-1)
  {
   printf("The Queue is empty \n");
  }
  else if(front==rear)
  {
   printf("the deleted element is %d ",a[rear]);
   front=-1;rear=-1;
  }
  else
  {
   rear=rear-1;
  }
}

void pop(int n,int a[100])
{
  if(rear==-1&&front==-1)
  {
   printf("The Queue is empty \n");
  }
  else if(front==rear)
  {
   printf("the deleted element is %d ",a[front]);
   front=-1;rear=-1;
  }
  else
  {
   front=front+1;
  }
}


void display(int n,int a[100])
{
  int i;
  if(rear==-1&&front==-1)
  {
   printf("The Queue is empty \n");
  }
  else
  {
   printf("The remaining queue are \n");
   for(i=front;i<=rear;i++)
   {
    printf("%d\t",a[i]);
   }
  }
}
