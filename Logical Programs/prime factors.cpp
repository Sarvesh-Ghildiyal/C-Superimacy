// Prime factors of any number
#include<stdio.h>
int prime(int);
int main()
{
	printf("Enter a no. ");
	int num,pri;
	scanf("%d",&num);
	pri=prime(num);
    
}
int prime(int n)
{
	int i=2;
	if(n==1)
	 return 1;
	else if(n%i==0)
	  {
	     printf("%d ",i);
	     prime(n/i);
	  }
	else if(n%i!=0)
	 {
	   do 
	  {
	    i++;
	  }while(n%i!=0);
	    printf("%d ",i);
	    prime(n/i);
	 }
}
