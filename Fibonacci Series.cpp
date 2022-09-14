#include<stdio.h>
int Fibo(int);
int main()
{
   int n,i;
   printf("Enter the nth term:");
   scanf("%d",&n);
   printf("The fibonaci series");
   for (i=0;i<=n;i++ )
   {
      printf("\n%d", Fibo(i)); 
   }
   return 0;
}
int Fibo(int k)
{
	if(k==0)
	{
		return 0;
	}
    else if (k==1||k==2)
       return 1;
    else
       return(Fibo(k-1)+Fibo(k-2));
} 
