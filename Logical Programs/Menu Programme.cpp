#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,num,a=1,choice,B,A=1;
	system("color 0B");
	while(a)
	{
		printf("1.Factorial of a number\n");
		printf("2.Prime or not\n");
		printf("3.Odd or Even\n");
		printf("4.Exit\n");
		printf("Please make a choice ");
		scanf("%d",&choice);
		if (choice>4)
		    printf("\nINVALID CHOICE...\n");
		printf("\n:::::::::::\n\n");
		switch(choice)
		{
			case 1:
				printf("Enter your number: ");
				scanf("%d",&num);
				i=num-1;
				while(i)
				{
					num=num*i;
					i--;
				}
				printf("\nThe factorial of 5 is = %d\n",num);
					printf("\n:::::::::::\n");
				break;
			case 2:
				printf("Enter your number: ");
				scanf("%d",&num);
				if(num==1)
				 printf("\n%d is niether prime nor composite\n",num);
				for(i=2;i<num;i++)
				{
					if(num%i==0)
					 printf("\n%d is not a prime number ",num);
				}
				if(i==num)
				  printf("\n%d is  a prime number\n",num);
				 	printf("\n:::::::::::\n\n");
				break;
			case 3:
				printf("Enter your number: ");
				scanf("%d",&num);
				if(num%2==0)
				 {printf("\n%d is an even number\n",num);
				  printf("\n:::::::::::\n");}
				else 
				 printf("\n%d is a odd number\n",num);
				 	printf("\n:::::::::::\n");
				break;
			case 4:
				break;
				
		}
	
	}

	    out:
		printf("%c%c THANK YOU %c%c",B,A,A,B);
}








