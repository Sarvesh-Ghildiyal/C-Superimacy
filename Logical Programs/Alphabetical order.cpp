#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define L 10
#define Okay
void sort();
char *names[L];int num;char str[L];
void input()
{
	
	//Input names
	char *p;int len;char string[23];
   printf("Enter no. of names you want to enter ");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
   	 printf("Enter name %d ",i);
   	 fflush(stdin);
   	 scanf("%[^\n]s",&string);
   	 len=strlen(string);
   	 p=(char*)malloc(len+1);
   	 strcpy(p,string);
   	 names[i-1]=p;
   }
}
void check()
{
	//for checking
	for(int i=0;i<num;i++)   
	{
		str[i]=names[i][0];
	}
    strupr(str);
    sort();
}
void sort()
{
	for(int k=0;k<num;k++)
	{
		for(int i=0;i<num-1;i++)
		{
			for(int j=i+1;j<num;j++)
			{
				if(str[i]>str[j])
				{
					char swap=str[i];
					str[i]=str[j];
					str[j]=swap;
				}
			}
		}
	}
	for(int i=0;i<num;i++)
	 printf("%c ",str[i]);
	printf("\n\n");
	
}
void print()
{
  for(int i=0;i<num;i++)
  {
  	for(int j=0;j<num;j++)
  	{
  		if(str[i]==names[j][0])
  		 printf("%d:%s\n",i+1,names[j]);
	  }
  }
}
int main()
{
   input();
   check();
   printf("Names in alpha batical orders is: \n");
   print();
}



