//Queue using linked list
//First in First out
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node *next;
}*head,*ptr;

void enqueue();
void dequeue();
void show();

int main()
{
	while(1)
	{
		printf("\n1.Show elements of queue\n");
		printf("\n2.Push elements in queue\n");
		printf("\n3.Pop elements from queue\n");
		printf("\n4.Exit\n");
		printf("\n5.Peek\n");
		printf("\n Enter your choice ");
		int choice;
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				show();
				break;
			case 2:
				enqueue();
				break;
			case 3:
				dequeue();
				break;
			case 4:
				printf("All done %c",1);
				exit(1);
			case 5:
			
				break;
			default:
				printf("\nWrong choice\n");
						
		}
		fflush(stdin);
		printf("\nPress enter ");
		getchar();
		system("cls");
		fflush(stdin);
	}
}

//queue work on fifo 
//so each new element can either be entered as first element of list then removed 1 by 1
void enqueue()
{
	ptr=(node*)malloc(sizeof(node));
	if(ptr==NULL)
	{
		printf("OVERFLOW CONDITION\n");
		exit(2);
	}
	int value;
	printf("\nEnter value to be entered in queue ");
	scanf("%d",&value);
	ptr->data=value;
	ptr->next=head;
	head=ptr;
}

void dequeue()
{
	if(head==NULL)
	{
		printf("UNDERFLOW CONDITON\n");
		return;
	}
	node *temp=head,*prev;           //to traverse through the linked list
	while(temp->next!=NULL)
	{
		prev=temp;                  //second last element of the list
		temp=temp->next;            //incrementing for the list
	}
	free(temp);                     //freeing last element of the list i.e first element entered
	prev->next=NULL;                //setting second last element next pointer to NULL
	printf("\nNODE REMOVED\n");
	
	if(head->next==NULL)
	{
		free(head);
		head=NULL;
		printf("\nNODE REMOVED\n");
	}
}

void show()
{
	if(head==NULL)
	{
		printf("Nothing to show...\n:::Queue is empty\n");
		return;
	}
	else
	{
		node *temp=head;                 //To traverse through linked list
		
		printf("\nprinting elements....\n");
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}

