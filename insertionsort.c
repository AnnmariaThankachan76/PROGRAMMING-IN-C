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
	temp=a[i];
	j=i-1;
	while((j>=0)&&(a[j]>temp))
		{
			a[j+1]=a[j];
			j--;
		}
	a[j+1]=temp;
   }
printf("  the sorted array is\n");
for(i=1;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

}
