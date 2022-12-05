//Stacks using linked list
//Last in Last out concept
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node *next;
}*ptr,*head;
typedef struct node node;

void show();
void push();
void pop();
void peek();

int main()
{
	while(1)
	{
		printf("\n1.Show elements of stack\n");
		printf("\n2.Push elements in stack\n");
		printf("\n3.Pop elements from stack\n");
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
				push();
				break;
			case 3:
				pop();
				break;
			case 4:
				printf("All done %c",1);
				exit(1);
			case 5:
				peek();
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

void show()
{
	if(head==NULL)
	{
		printf("Nothing to show...\n:::Stack is empty\n");
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

//all elements will be inserted as the first node of list
void push()
{

	ptr=(node*)malloc(sizeof(node));
	if(ptr==NULL)
	{
		printf("\nOVERFLOW CONDITION ");
		exit(2);
	}
	
	int value;
	printf("\nEnter element to be inserted ");
	scanf("%d",&value);
	
	//Inseting node as the first node insert_first()
		ptr->data=value;
		ptr->next=head;
		head=ptr;
		printf("NODE INSERTED\n");
		return;

}

void pop()
{
	if(head==NULL)
	{
		printf("UNDERFLOW CONDITION\n");
		return ;
	}
	
	node *temp=head;
	head=temp->next;               //setting head pointer to second node
	free(temp);                    //deleting first node
	printf("Element has been deleted\n");
}

void peek()
{
	if(head==NULL)
	{
		printf("UNDERFLOW CONDITION\n");
		exit(2);
	}
	node *temp=head;
	int compare=temp->data;
	while(temp!=NULL)
	{
	
		if(compare<temp->data)
		   compare=temp->data;
		temp=temp->next;
	}
	printf("Largest element in the stack is %d\n",compare);
}
