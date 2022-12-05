// Queue in Data structures

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define S 5


char queue[S];
int top=0,tail=-1;


void enqueue();
void dequeue();
void peek();
void show();


int main()
{
	system("color 0B");
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    show();
    
    dequeue();
    peek();
    show();
    
}

//function or inserting element in queue
void enqueue()
{
	if(top==S-1){
		printf("Queue is already full ");
		return ;
	}
	else{
		int ch;
		printf("\n\n\t\tEnter character you want to enter ");
		fflush(stdin);
		scanf("%d",&ch);
		if(tail==-1)
		 top++;
	    queue[++tail]=ch;
	}
	printf("\t\tElement inserted");
}


//function for deleting element from queue
void dequeue()
{
	if(top==S){
		printf("Queue is already empty ");
		top=0;
		return ;
	}
	top++;
	printf("\n\n\t\tElement deleted");
	return;
}


//Function for showing element of stacks
void show()
{
	printf("\n\n\t\tprinting elements.... ");
	for(int i=0,j=1;i<S;i++){
		printf("%d ",queue[i]);
	}
}


//function for finding global peak in the queue
void peek()
{
	
	if(top==0){
		printf("\n\t\tQueue is empty ");
		return ;
	}
	
	//Using selection sort for finding global peak
	int position,element_index;
	for(int i=0;i<1;i++)
	{
		position=i;
		for(int j=i+1;j<S;j++)
		{
			if(queue[position]<queue[j])
			   position=j;
		}
        element_index=position;
	}
	printf("\n\n\t\tThe greatest element in the queue is %d at index %d ",queue[element_index],element_index);
	return ;
}
