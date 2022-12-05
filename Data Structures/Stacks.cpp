//Stacks

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#define SIZE 5

///function used in the program

void show();
void push();
void pop();
void peek();


int stack[SIZE],top=-1;

int main()
{
	show();
	
	push();
	push();

	show();
	
	pop();
	push();
	show();
	
	peek();
	
	pop();
	
	show();
	
}


//function for showing elements of stack
void show()
{
	if(top==-1){
	 printf("\n\t\tStack is empty");
	 return ;
	}
	else{
		printf("\n\n\t\tprinting elements....      ");
		for(int i=0;i<SIZE;i++)
		 printf("%d ",stack[i]);
	}
	return ;
}

//function for pushing element in stack
void push()
{
	int element;
	if(top==SIZE-1)
	{
	   printf("\n\t\tStack is already full ");
	   return ;
	}
	printf("\n\n\t\tEnter element you want to push in stack ");
	fflush(stdin);
	scanf("%d",&element);
	top+=1;
	stack[top]=element;
	printf("\n\t\tElement inserted");
	return;
}

//function to pop element from stack;
void pop()
{
	if(top==-1){
		printf("\n\t\tStack is already empty ");
		return ;
	}
	stack[top]='\0';
	top-=1;
	printf("\n\n\t\tElement deleted");
	return ;
}

//function for peeking in stack
void peek()
{
	if(top==-1){
		printf("\n\t\tStack is empty ");
		return ;
	}
	
	//Using selection sort for finding global peak
	int position,element_index;
	for(int i=0;i<1;i++)
	{
		position=i;
		for(int j=i+1;j<SIZE;j++)
		{
			if(stack[position]<stack[j])
			   position=j;
		}
        element_index=position;
	}
	printf("\n\n\t\tThe greatest element in the stack is %d at index %d \n",stack[element_index],element_index);
	return ;
}
