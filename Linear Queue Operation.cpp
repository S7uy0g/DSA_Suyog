//Linear Queue Operation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 20
int main()
{
	int ch,rear=-1,front=0,queue[size],ele,i;
	while(1)
	{
		printf("\n");
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element:");
				scanf("%d",&ele);
				if(rear==size-1)
				{
					printf("Queue is full!!\n");
				}
				else
				{
					rear++;
					queue[rear]=ele;
					printf("Element Entered!!\n");
				}
				break;
			case 2:
				if(rear<front)
				{
					printf("Queue empty!!\n");
					break;
				}
				else
				{
					ele=queue[front];
					front++;
					printf("Item deleted is %d\n",ele);
					break;
				}
			case 3:
				if(rear<front)
				{
					printf("Queue empty!!\n");
					break;
				}
				else
				{
					for(i=front;i<=rear;i++)
					{
						printf("%d",queue[i]);
						printf("\n");
					}
					break;
				}
			case 4:
			    exit(0);
			default:
			    printf("Enter valid choice!!\n");
				break;	
		}
	}
}
