#include<stdio.h>
void selectionsort(int [],int);
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
  selectionsort(a,n);
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

void selectionsort(int a[100],int n)
{
 int i,j,temp;
 for(i=0;i<n-1;i++)
 	{
 	 for(j=i+1;j<n;j++)
 	 {
 	  if(a[i]>a[j])
 	  {
 	   temp=a[i];
 	   a[i]=a[j];
 	   a[j]=temp;
 	  }
 	 }
 	}
}
