//Circular doubly linked list
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
}*ptr,*head,*last;
typedef struct node node;

void insertfirst();
void insertlast();
void randominsert();
void deletefirst();
void deletelast();
void traverse();

void insertfirst()
{
	ptr=(node*)malloc(sizeof(node));
	if(ptr==NULL){
		printf("Overflow condition\n");
		return;
	}
	int value; printf("\nEnter value for node "); scanf("%d",&value);
	if(head==NULL){
		ptr->data=value;
		ptr->next=last;
		ptr->prev=NULL;
		head=ptr;
		printf("\nNODE INSERTED\n");
	}
	else{
		ptr->data=value;
		ptr->next=head;
	    ptr->prev=NULL;
	    head=ptr;
	    printf("\nNODE INSERTED\n");
	}
	
}

void insertlast()
{
	if(head==NULL){
		insertfirst();
		return;
	}
	ptr=(node*)malloc(sizeof(node));
	if(ptr==NULL){
		printf("\nOVERFLOW CONDITION\n"); return;
	}
	node *temp=head;
	while(temp->next!=NULL) temp=temp->next;
	if(head==NULL) insertfirst();
	else{
		int value; printf("\nEnter value for the node "); scanf("%d",&value);
		ptr->data=value;
		ptr->next=last;
		ptr->prev=temp;
		temp->next=ptr;
		printf("\nNODE INSERTED\n");
	}
}

void randominsert()
{
	ptr=(node*)malloc(sizeof(node));
	if(ptr==NULL){
		printf("\nOVERFLOW CONDITION\n"); return;
	}
	node *before=head,*after;
	int pos,count=0;
	printf("\nEnter position you want to enter "); scanf("%d",&pos);
	if(pos==1){
		insertfirst();
		return;
	}
	while(before!=NULL){
		count++;
		before=before->next;
	}
	if(pos<=count)
	{
		int value;
		printf("\nEnter value for node "); scanf("%d",&value);
		before=head;
		for(int i=1;i<pos-1;i++) before=before->next;
		after=before->next;
		ptr->data=value;
		ptr->prev=before;
		ptr->next=after;
		before->next=ptr;
		after->prev=ptr;
		printf("\nNODE INSERTED\n");
		return;
	}
	else if(pos==count+1){
		insertlast();
		return;
	}
	else{
		printf("\nWrong choice\n");
		free(ptr);
		randominsert();
	}
}

void traverse()
{
	node *temp=head;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	printf("\nprinting elements....\n");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insertlast();
	insertlast();
	insertlast();
	randominsert();
	traverse();
	node *temp=head->next;
	printf("\naddres of 2nd node %u\n",temp);
	printf("\naddress of 2nd node from head %u\n",head->next);
    temp=temp->next;
	printf("\naddressof 2nd node from 3rd one %u\n",temp->prev);
	printf("\nLast pointer value %u",last);
	
}
