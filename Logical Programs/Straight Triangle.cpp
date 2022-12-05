#include<stdio.h>
int main()
{
	int i,j,a,space,rows;
	printf("Enter number of rows ");
	scanf("%d",&rows);
	int b=rows*2;
	for(i=1; i<=rows; i++)
	{
		printf("\t");
		for(space=b;space>=1;space--)
		{
			printf(" ");
		}
		b=b-2;
		a=(i*2)-1;
		for(j=1;j<=a;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
