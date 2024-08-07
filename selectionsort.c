#include<stdio.h>
void main()
{
int  i,j,n,temp,a[50];
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=1;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  for(j=i;j<n;j++)
  {
     if(a[i]> a[j])
     {
         temp=a[i];
          a[i]=a[j];
          a[j]=temp;
       }
   }
 }
       
printf("The sorted array is\n");
 for(i=1;i<n;i++)
	{
		printf("%d\n",a[i]);
	} 
}