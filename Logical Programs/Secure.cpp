#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Size 34
int main()
{
	char input[Size],output[Size];
	char *p;
	int a,b;
	double winnings;
	printf("Enter the value ");
	p=fgets(input,Size,stdin);
	//validating fgets statement
		if(p==NULL)
		{
			 printf("Invalid input");
			 exit(1);
		}
	a=b=0;
	while(1)
	{
		//terminate upon new line
		if(input[a]=='\n')
		{
			output[b]='\0';
			break;
		}
		//ignoring commas
		if(input[a]==',')
		 {
		 	a++;
		 	continue;
		 }
		 output[b]=input[a];
		 b++;
		 a++;
	    //avoid buffer overflow
		if(a==strlen(input))
		{
			output[b]='\0';
			break;
		}
		
	}
	//translates to float
	winnings=strtod(output,&p);
	
	//dealing with negativ values
	if(winnings<0)
	{
		printf("negative winnings cannot be taxed");
		exit(0);
	}
	winnings*=0.45;
	printf("the net winnings are %.2lf",winnings);
       
}
