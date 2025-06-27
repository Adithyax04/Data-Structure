#include<stdio.h>
void bubblesort(int [],int);
void display(int [],int);
void main()
{
  int a[100],n,i;
  printf("Enter the no of terms in array : ");
  scanf("%d",&n);
  printf("Enter the elements in array : ");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("\n              Before Sorting \n");
  display(a,n);
  bubblesort(a,n);
  printf("\n              After Sorting \n");
  display(a,n);
}

void display(int a[100],int n)
{
 int i;
 printf("\nThe array elements are \n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 printf("\n"); 
}

void bubblesort(int a[100],int n)
{
 int i,j,temp;
 for(i=1;i<n;i++)
 	{
 	  for(j=0;j<n-i;j++)
 	  {
 	   if(a[j]>a[j+1])
 	   {
 	    temp=a[j];
 	    a[j]=a[j+1];
 	    a[j+1]=temp;
 	   }
 	  }
 	}
}
