//Bubble Sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int i ,n,a[20],j,temp;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the list of elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nbubble sort:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
