
	//in toh function u just do things as u would in real life but
	//remember to use rod names as variables instead of just names
	//thus first name those rods as from rod , to rod and last helping rod
	// then when you further use it on program use them by their assigned names as variables
	//got it?
#include<stdio.h>
#include<stdlib.h>

void toh(int n,char from,char to,char helping)
{
	if(n==1)
	{
		//here in recurssion start from break point 
		//if input is one program will execute and return
		printf("\t\tMove disk %d from rod %c to rod %c\n",n,from,to);
		return;
	}
	//then set conditions for 2nd input moving from break point to up i.e 2 in this case
	
	toh(n-1,from,helping,to);//here from , helping and to are just rods as u would do in real life
	
	printf("\t\tMove disk %d from rod %c to rod %c \n",n,from,to,helping);//here condition for rod 2 what should be done
	
	toh(n-1,helping,to,from);//then again we need rod one to move up to rod 2 which is done by this rcall
}

void program()
{
     //i used flag variable to know if i should clear the screen or not, after one run atleast i would clear it 
	int flag=0;
	while(1)
	{
	    if(flag!=0){
		 printf("\n\n\t\t::::");	
		 fflush(stdin);
	     printf("\n\t\tTo continue enter a key: ");
	     fgetchar();
	     system("clear");
		}
		printf("\n\n\t\t1.Start");
		printf("\n\n\t\t2.End ");
		printf("\n\n\t\tEnter your choice ");
		int choice;
		scanf("%d",&choice);
		switch (choice){
			case 1:
				int n,check;
				printf("\n\t\tEnter no. of disk ");
				scanf("%d",&n);
				printf("\n");
				flag=1;
				
				//if you want to change destiny of rod make them here!
				toh(n,'A','C','B');
				break;
			case 2:
				printf("\n\t\tThank you %c",1);
				exit(0);
			default:
				flag=1;
	            printf("\n\n\t\tWrong choice");
	            continue;
		}
	}
}
int main()
{
	system("color 0A");
	program();
}
