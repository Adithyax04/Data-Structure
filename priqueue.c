#include<stdio.h>
void enqueue(int,int,int);
void dequeue(int);
void display(int);
int front=-1,rear=-1;
struct pri
{
 int element;
 int priority;
}p1[100];
void main()
{
 int n,c,element,pri;
 printf("enter the size of queue : ");
 scanf("%d",&n);
 do
 {
   printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
   printf("enter your choice : ");
   scanf("%d",&c);
   switch(c)
   {
    case 1:printf("enter element to be inserted : ");
    	   scanf("%d",&element);
    	   printf("enter priority of the element inserted : ");
    	   scanf("%d",&pri);
    	   enqueue(n,element,pri);
    	   break;
    case 2:dequeue(n);
    	   break;
    case 3:display(n);
    	   break;
    case 4:
    	   break;
    default:printf("enter valid choice \n");
   }
 }while(c!=4);
}

void enqueue(int n,int element,int pri)
{
  int i,loc;
  if(rear==n-1&&front==0)
  {
   printf("The Queue is full \n");
  }
  else if(front==-1&&rear==-1)
  {
   front=0;rear=0;
   p1[rear].element=element;
   p1[rear].priority=pri;
  }
  else if(rear==n-1)
  {
   for(i=front;i<=rear;i++)
   {
    p1[i-1].element=p1[i].element;
    p1[i-1].priority=p1[i].priority;
   }
   front=front-1;rear=rear-1;
   for(i=rear;i>=front;i--)
   {
    if(p1[i].priority<pri)
      break;
   }
   loc=i+1;
   for(i=rear;i>=loc;i--)
   {
    p1[i+1].element=p1[i].element;
    p1[i+1].priority=p1[i].priority;
   }
    rear=rear+1;
    p1[loc].element=element;
    p1[loc].priority=pri;
  }
  else
  {
   for(i=rear;i>=front;i--)
   {
    if(p1[i].priority<pri)
      break;
   }
   loc=i+1;
   for(i=rear;i>=loc;i--)
   {
    p1[i+1].element=p1[i].element;
    p1[i+1].priority=p1[i].priority;
   }
    rear=rear+1;
    p1[loc].element=element;
    p1[loc].priority=pri;
  }
}

void dequeue(int n)
{
  if(rear==-1&&front==-1)
  {
   printf("The Queue is empty \n");
  }
  else if(front==rear)
  {
   printf("The deleted element is %d",p1[front].element);
    printf("\nit's corresponding priority is %d",p1[front].priority);
   rear=-1;front=-1;
  }
  else
  {
   front=front+1;
  }
}

void display(int n)
{
  int i;
  if(front==-1&&rear==-1)
  {
   printf("The queue is empty \n");
  }
  else
  {
  printf("Remaining queue are \n");
  for(i=front;i<=rear;i++)
  {
   printf("%d\t",p1[i].priority);
  }
  printf("\n");
  for(i=front;i<=rear;i++)
  {
   printf("%d\t",p1[i].element);
  }
  }
}

