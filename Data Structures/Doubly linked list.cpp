//doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct  node
{
	int data;
	struct node *prev;
	struct node *next; 
}*head,*ptr;

 void beginsert()
{
	int value; 	
	ptr=(struct node*)malloc(-1);
	
	//if ptr is null program cannot be executed further
	if(ptr==NULL)
	 printf("Cannot insert\n");
	
	//create a node 
	//enter data
	//set prev node to null or head pointer
	//set next node to null in case of 1 element else next to other element
	//set head to the ptr pointer as head/start marks the begining of the list	 
	else{
		printf("\nEnter value ");
	    scanf("%d",&value);
	    ptr->data=value;
	    ptr->prev=head;
	    ptr->next=head;
	    head=ptr;
	    printf("\nNODE INSERTED\n");
	}
}

void lastinsert()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	 printf("OVERFLOW CONDITION\n");
	
	//first check if head is not null
	//create a pointer i.e ptr 
	//set data to what user want i.e ptr->data=value;
	//set prev pointer to the node one below for that create temp pointer and travese to taht point
	//set next pointer to nULL
	
	int value;
	struct node* temp;  //temp pointer created for traversing through the list
	temp=head;          //temp set to head for having a starting point
	
	
		if(head==NULL){
			beginsert();
		}
		else{
			printf("\nEnter value ");
		    scanf("%d",&value);
			while(temp->next!=NULL){
			temp=temp->next;       //incrementing in list for traversing
		}
		temp->next=ptr;
		//NOW here setting new pointer as instructed above
		ptr->data=value;
		ptr->prev=temp;
		ptr->next=NULL;
		printf("NODE INSERTED \n");
		}
	
}

void randominsert()
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));  //check for space if there is, for new node
	if(temp==NULL)
	{
		printf("OVERFLOW \n");
	}
	here:  //for conditions if postion entered is too much
		{
			
	int value,pos,count=0;
	if(head==NULL){
	 printf("LIST is empty so u will be entering data at first position \n");
	 beginsert();
	 return ;
    }
    else{
    	printf("\nEnter position you want to enter the data ");
	scanf("%d",&pos);
	if(pos==1){
		beginsert();
		return;
	}
	
	//traversing thorugh list to find total no. of elments
	temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	//firs i checked if there are enough elements 
	//so that user can have choice to insert at places
	if(pos<=count){
		ptr=(struct node*)malloc(sizeof(struct node));
		if(ptr==NULL){
			printf("Cannot insert\n");
			return;
		}
		else{
			printf("\nEnter value ");
			scanf("%d",&value);
			ptr->data=value;
			
			//now for inserting element we need
			//1.pointer before and after position
			//set before pointer next pos to ptr
			//set ptr prev to before pointer and next to after pointer
			//set after pointer prev to ptr
			
			struct node *before, *after;
			before=head;   //set before for having starting point
			for(int i=1;i<pos-1;i++){
				before=before->next;
			}
			after=before->next;
			
			//now making arrangements as we insert new node i.e ptr
			before->next=ptr;
			ptr->prev=before;
			ptr->next=after;
			after->prev=ptr;
			printf("NODE INSERTED\n");
			return;
			}
		}
		else if(pos==count+1)
		    lastinsert();
		else{
		 printf("\n\nWrong position buddy\n");
		 goto here;
    	}
	}
         }
}

//function for deleting first element of link list
//for deleting element 
//introduce a temp node, set it to head node
//set head node to temp->next 
//then free temp node 
//first node deleted, set new fnode prev to head nooow you are done
void deletefirst()
{
	if(head==NULL){
	 printf("UNDERFLOW ");
	 return ;
	}
	node *temp=head;               //setting temp as first node
	head=temp->next;               //setting head to second node
	free(temp);                    //deleting first node i.e temp at the moment 
    printf("\nNODE DELETED\n");
    temp=head;                    //setting temp as second node or first node at the moment
    temp->prev=NULL;              //setting temp->prev to head
}

void deletelast()
{
	if(head==NULL)
	{
		printf("UNDERFLOW CONDITION\n");
		return;
	}
	node *temp=head,*before;
	while(temp->next!=NULL)
	{
		before=temp;
		temp=temp->next;
	}
	free(temp);
	before->next=NULL;
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
	lastinsert();
	lastinsert();
	beginsert();
	traverse();
	deletelast();
	deletefirst();
	traverse();
	node*temp=head;
	printf("\naddressof first node %d",temp);
	temp=temp->next; 
	printf("\naddress of first node %d",temp->prev);
}


// ///////
// void			find_available_block(size_t size,
// 	t_heap **res_heap, t_block **res_block);
// t_heap			*get_heap_of_block_size(const size_t size);
// void			*append_empty_block(t_heap *heap, size_t size);
// void			delete_heap_if_empty(t_heap *heap);
// t_block			*merge_block(t_heap *heap, t_block *block);
// void			remove_block_if_last(t_heap *heap, t_block *block);
// void			log_stack(t_stack_event event, size_t size);
// void			log_detail(t_detail_event event);
// t_block			*try_filling_available_block(size_t size);
// t_bool			getenv_cached(t_env env);
