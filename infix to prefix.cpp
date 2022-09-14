#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int precedence(char);
int main()
{
	char infix[100],prestack[100],opstack[100];
	int size,i=0,otos=-1,ptos=-1,len=0,j;
	printf("Enter expression:");
	gets(infix);
	size=strlen(infix);
	len=size;
	for(i=len-1;i>=0;i--)
	{
		if(infix[i]==')')
		{
			otos=otos+1;
			opstack[otos]=infix[i];
		}
		else if(isalpha(infix[i]))
		{
			ptos=ptos+1;
			prestack[ptos]=infix[i];
		}
		else if(infix[i]=='(')
		{
			while(opstack[otos]!=')')
			{
			    ptos=ptos+1;
				prestack[ptos]=opstack[otos];
				otos=otos-1;
			}
			otos=otos-1;
		}
		else
		{
			if(precedence(opstack[otos])>=precedence(infix[i]))
			{
				ptos++;
				prestack[ptos]=opstack[otos];
				otos--;
			}
			otos++;
			opstack[otos]=infix[i];
		}
	}
	while(otos!=-1)
	{
		ptos++;
		prestack[ptos]=opstack[otos];
		otos--;
	}
	for(j=ptos;j>=0;j--)
	{
		printf("%c",prestack[j]);
	}
	return 0;
}
int precedence(char symbol)
{
	if(symbol == '*')
	{
		return(5);
	}
	else if(symbol == '/') 
	{
		return(4);
	}
	else if(symbol == '+')
	{
		return(3);
	}
	else if(symbol == '-')
	{
		return(2);
	}
	else if(symbol == '^')          
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
