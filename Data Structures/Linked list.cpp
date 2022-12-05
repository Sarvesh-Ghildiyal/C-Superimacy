//Program for LINKED LIST
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct node{
	int data;
	struct node *next;
};

typedef struct node node;
node *head,*ptr;
int value,pos;

//function to insert node at the begining/starting of linked list
void beginsert()
{
	ptr=(node*)malloc(sizeof(node));
	if(ptr==NULL){
	 printf("Cannot insert");
	 exit(1);              //exit 1 for ptr not having a value
	}
	
	printf("Enter value to be entered ");
	fflush(stdin);
	scanf("%d",&value);
	if(head==NULL){        //if head is null u are just starting a linked list so no worries
		ptr->data=value;
		ptr->data=NULL;
		head=ptr;
	}
	else{                 // head is not null then u goota introduce a node in between head and first node 
	                      //so make changes accordingly
		ptr->data=value;
		ptr->next=head;    //ptr should carry address of first node head points to
		head=ptr;
	}
	printf("NODE INSERTED\n");
}

//function to insert at the last of the linked list
void lastinsert()
{
	node *temp=head;           //for traversing thorugh list to get to last element at present
	ptr=(node*)malloc(sizeof(node));
	if(ptr==NULL){
		printf("OVERFLOW\n");
		exit (1);
	}
	printf("Enter value to be entered ");
	fflush(stdin);
	scanf("%d",&value);
	{
		if(head==NULL){    //if head is null then first node made is last and first one so no probs
			ptr->data=value;
			ptr->next=head;
			head=ptr;
		}
		else{
			while(temp->next!=NULL)   //checking untill temp->next is not null and set temp to that 
			   temp=temp->next;       //for incrementing temp will store its next ptr. value untill null is encountered
		    temp->next=ptr;
		    ptr->data=value;
		    ptr->next=NULL;
		}
	}
}


//function to insert node at random
void randominsert()
{
	ptr=(node*)malloc(sizeof(node));
	if(ptr==NULL){
		puts("OVERFLOW\n");
		exit(1);
	}
	here:
		{
			node *before=head,*after;                //for postion's previous and next item
			int count=0; /*for counting if postion not > than nodes*/    
			                          	
	printf("Enter position you want to enter ");
	fflush(stdin);
	scanf("%d",&pos);
	
	/*counting total number of node*/
		while(before!=NULL){                
		before=before->next;
		count++;
	}
	
	//till here
	
	if(count<pos){                  //if nodes is less than pos than wrong input, start over i.e (goto here)
		printf("Wrong position\n");
		goto here;
	}
	else{
		before=head;
		if(head==NULL){                     //if linked list is empty, u would just be being insert
			printf("LINKED LIST IS EMPTY\n so it's your first element ");
			beginsert();
			return;
		}
		printf("Enter value ");
		fflush(stdin);
		scanf("%d",&value);
		                                    //setting before pointer to just one place before the required position
		for(int i=1;i<pos-1;i++){         
			before=before->next;
		}                       
		after=before->next;      //set after postion pointer, next to before node (after=before->next)
		
		ptr->data=value;
		ptr->next=after;         //setting ptr node at given position
		
		before->next=ptr;        //set before node next(before->next) pointer to ptr 
 	}

		}
	
}


//int main()
//{
//	int choice;
//	while(1){
//		system("clear");
//		printf("\n\n***MAIN MENU***\n");
//		printf("1.INSERT at the begining\n");
//		printf("2.INSERT at the LAST\n");
//		printf("3.RANDOM INSERT\n");
//		printf("Enter your choice ");
//		fflush(stdin);
//		scanf("%d",&choice);
//		switch(choice){
//			case 1:
//				beginsert();
//				fflush(stdin);
//				getchar();
//				break;
//			case 2:
//				lastinsert();
//				break;
//			case 3:
//				randominsert();
//				break;
//		}
//	}
//}

int main()
{
	lastinsert();
	lastinsert();
	node *temp=head;
	printf("%d",temp->next);
}
