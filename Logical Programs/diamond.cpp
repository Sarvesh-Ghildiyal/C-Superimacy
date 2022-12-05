#include<stdlib.h>
#include<stdio.h>
int main()
{
	system("color 0B")
	;int i,a,j,rows,space;
	printf("Enter number of rows ");
	scanf("%d",&rows);
	int b=a=rows*2;
	//straight triangle
	for(i=1;i<=rows;i++)
	{
		// space is decreasing
		for(space=1;space<=a;space++)
		  printf(" ");
		a--;
		for(j=1;j<=(i*2)-1;j++)
		 printf("*");
		printf("\n");
	}
	a=a+1;
	//reverse triangle
	for(i=rows;i>=1;i--)
	{
		rows=rows-1;
		a++;
		//space should increase with preceeding line
		for(space=1;space<=a;space++)
		  printf(" ");
		for(j=1;j<=(rows*2)-1;j++)
		 printf("*");
		printf("\n");
	}
}
