#include<stdio.h>
#include<conio.h>
void TOH(int n,char A,char B,char C);
int main()
{
	int n;
	printf("Enter no. of disk:");
	scanf("%d",&n);
	TOH(n,'A','B','C');
	return 0;
}
void TOH(int n,char A,char B,char C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("\nMove Disk=%d from %c to %c",n,A,B);
		TOH(n-1,C,B,A);
	}
}
