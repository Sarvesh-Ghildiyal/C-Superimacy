//Infix to postfix conversion

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define S 40

char exp[S],stack[S],temp[S];
int s_top=-1,t_top=-1;


void postfix();
void push(char);
void pop(); //for poping higher priority elements
void pop_all(); //for emptying stack at last of program

int main()
{
	printf("\n\n\n\t\tEnter expression for conversion ");
	scanf("%s",exp);
	stack[strlen(exp)]=='\0';  //Marking last element of a string
	postfix(); 
	printf("\n\n\t\tExpression after conversion is %s",temp);
	return 0;
}


//Function for postfix conversion 
void postfix()
{
	int i=0;
	while(exp[i]!='\0'){
		if(isalnum((int)exp[i])){
				//printf("temp %c\n",exp[i]);   //To know what goes in temp
			temp[++t_top]=exp[i];
		}
		else{
		//if(i==7)
		  //printf("\tSTACK IS  %s\n",stack);
		//printf("stack %c\n",exp[i]); //To know what goes in stack
		
			push(exp[i]);
		}
		//printf("\t\t\t\ti is %d\n",i);
		i++;
	}
	
//	printf("\t\t\tstack is%s",stack);
	pop_all();
}


void push(char c)
{
	if(s_top==-1){
		stack[++s_top]=c;
		return ;
	}
	
	//if new character is + or - then u would clear the stack until u get same priority element or a (
	if((stack[s_top]=='*' || stack[s_top]=='/') && (c=='+'|| c=='-')){
		
		do{
			pop();
			stack[++s_top]=c;
		}while(stack[s_top-1]=='*' || stack[s_top-1]=='/'); //this checks if top-1 is * or /
	}
	
	//if top-1 is ^ then u must pop it first as it has higest priority
	else if(stack[s_top]=='^'){
		pop();
		stack[++s_top]=c;
	}
	
	//if there are brackets in expression then
	//just check if closing bracket is encountered you should pop out the stack until u find open bracket
	else if(c==')'){
		do{
			if(stack[s_top]=='(')
			    break;
			pop();
		}while(stack[s_top]!='(');
		s_top--;
	}
	
	//For operations that are not known
	else if(c!='*' && c!='/' && c!='+' && c!='-'){
		pop();
		stack[++s_top]=c;
	}
	
	else{
		stack[++s_top]=c;
	}
	
	
	
}


void pop()
{
	temp[++t_top]=stack[s_top];
	s_top--;
}

void pop_all()
{
	while(s_top!=-1){
		temp[++t_top]=stack[s_top];
		s_top--;
	}
}
