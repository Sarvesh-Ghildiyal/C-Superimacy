#include<stdio.h>
#include<string.h>
int main()
{
	char a[50]="a";
	char b[50]="b";
	char c[50];
	printf("Enter no. of values ");
	int num;
	scanf("%d",&num);
	printf("%s  %s ",a,b);
	for(int i=0;i<num-2;i++)
    {
    	strcpy(c,b);
    	strcat(b,a);
    	printf("%s ",b);
    	strcpy(a,c);
    	
	}
}
