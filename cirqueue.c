#include<stdio.h>
void enqueue(int,int [],int);
void dequeue(int,int []);
void display(int,int []);
int front=-1,rear=-1;
void main()
{
 int n,a[100],c,item;
 printf("enter the size of queue : ");
 scanf("%d",&n);
 do
 {
   printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
   printf("enter your choice : ");
   scanf("%d",&c);
   switch(c)
   {
    case 1:printf("enter item to be inserted : ");
    	   scanf("%d",&item);
    	   enqueue(n,a,item);
    	   break;
    case 2:dequeue(n,a);
    	   break;
    case 3:display(n,a);
    	   break;
    case 4:
    	   break;
    default:printf("enter valid choice \n");
   }
 }while(c!=4);
}

void enqueue(int n,int a[100],int item)
{
  if((rear+1)%n==front)
  {
   printf("The Queue is full \n");
  }
  else if(front==-1&&rear==-1)
  {
   front=0;rear=0;
   a[rear]=item;
  }
  else
  {
   rear=(rear+1)%n;
   a[rear]=item;
  }
}

void dequeue(int n,int a[100])
{
  if(rear==-1&&front==-1)
  {
   printf("The Queue is empty \n");
  }
  else if(front==rear)
  {
   printf("The deleted element is %d",a[front]);
   rear=-1;front=-1;
  }
  else
  {
   front=(front+1)%n;
  }
}

void display(int n,int a[100])
{
  int i;
  if(front==-1&&rear==-1)
  {
   printf("The queue is empty \n");
  }
  else if(front<=rear)
  {
  printf("Remaining queue are \n");
  for(i=front;i<=rear;i++)
  {
   printf("%d",a[i]);
   printf("\n");
  }
  }
  else
  {
  printf("Remaining queue are \n");
  for(i=0;i<=rear;i++)
  {
   printf("%d",a[i]);
   printf("\n");
  }
  for(i=front;i<n;i++)
  {
   printf("%d",a[i]);
   printf("\n");
  }
  }
}

