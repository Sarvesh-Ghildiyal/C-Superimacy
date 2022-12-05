// recurrsion to find sum of natural numbers
#include<stdio.h>
int sum(int);
int main()
{
	int  num,s;
	scanf("%d",&num);
	s=sum(num);
    printf("%d",s);
 
}
int sum(int n)
{
	int s=0;
	if(n==1)
	 return 1;
	else
	 s=n+sum(n-1);
	
	return(s);
	
}
