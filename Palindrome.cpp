#include <stdio.h>
#include <conio.h>
int reverse(int num);
int main()
{
    int num,rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev=reverse(num);
    printf("After reverse:%d",rev);
    if(rev==num)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }
    return 0;
}
int reverse(int num)
{
    static int rem,sum=0;
    if(num!=0)
	{
            rem=num%10;
            sum=sum*10+rem;
            reverse(num/10);
    }
    else
        return sum;
    return sum;
} 
