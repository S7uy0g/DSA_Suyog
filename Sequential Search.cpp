//Sequential Search
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a[20],key;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the list of elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter item to be searched:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("Search Sucessfull!!\n");
		    printf("Position=%d",i+1);;
			break;
		}
	}
	if(i==n)
	{
		printf("\nSearch Unsucessfull!!");		
	}
	return 0;
}
