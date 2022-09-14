//Circular Queue Operation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 4
int main()
{
	int ch,rear=size-1,front=size-1,queue[size],ele,i;
	while(1)
	{
		printf("\n");
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if((rear+1)%size==front)
				{
					printf("Queue is full!!\n");
				}
				else
				{
					rear=(rear+1)%size;
					printf("Enter the element:");
				    scanf("%d",&ele);
					queue[rear]=ele;
					printf("Element Entered!!\n");
				}
				break;
			case 2:
				if(rear==front)
				{
					printf("Queue empty!!\n");
					break;
				}
				else
				{
					front=(front+1)%size;
					printf("Item deleted is %d\n",queue[front]);
					break;
				}
			case 3:
				if(rear==front)
				{
					printf("Queue empty!!\n");
					break;
				}
				else
				{
					for(i=(front+1)%size;i!=rear;i=(i+1)%size)
					{
						printf("%d",queue[i]);
						printf("\n");
					}
					printf("%d",queue[rear]);
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
