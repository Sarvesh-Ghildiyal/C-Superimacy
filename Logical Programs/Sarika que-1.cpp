//finding numbers in string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	system("color 0b");
	int num[10]={0,0,0,0,0,0,0,0,0,0},check=0;
	char string[50],again;
	do
	{
		printf("Enter string: ");
		fflush(stdin);
	scanf("%[^\n]s",&string);
	for(int i=0;string[i]!='\0';i++)
	{
		if(string[i]>=48 && string[i]<=57)
		{
			if(string[i]==48)
			 num[0]+=1;
			else if(string[i]==49)
			 num[1]+=1;
			else if(string[i]==50)
			 num[2]+=1;
			else if(string[i]==51)
			 num[3]+=1;
			else if(string[i]==52)
			 num[4]+=1;
			else if(string[i]==53)
			 num[5]+=1;
			else if(string[i]==54)
			 num[6]+=1;
			else if(string[i]==55)
			 num[7]+=1;
			else if(string[i]==56)
			 num[8]+=1;
			else if(string[i]==57)
			 num[9]+=1;	 
		}
		else
		 check++;
	}
	if(check==strlen(string))
	 printf("\nThere are no numeric values in the given string \n");
	
	else
	 for(int i=0;i<10;i++)
	 {
	 	if(num[i]!=0)
		 printf("\nThe no. of %d in the given string is %d\n",i,num[i]);
     }
     printf("\nWanna try again y/n? ");
     fflush(stdout);
     fflush(stdin);
     scanf("%c",&again);
     if(again=='y'|| again=='Y')
      {
      	for(int i=0;i<10;i++)
      	 num[i]=0;
      	check=0;
      	printf("\n::::::\n");
	  }
	}while(again=='y' || again=='Y');
}
