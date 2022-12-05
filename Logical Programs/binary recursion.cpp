#include<stdio.h>
void binary(int);
int main()
{
	int num;
	char another;
	do{
	 printf("Enter number up for binary equivalent ");
	 scanf("%d",&num);
	 binary(num);
	 printf("\nwant to try once again y/n ");
	 fflush(stdin);
	 scanf("%c",&another);
	 printf("::::::\n");
    }while(another=='y' || another=='Y');
}
void binary(int n)
{
	static int place=1,sum=0;
	int rem;
	if(n==0)
    {
    	printf("binary equivalent= %d",sum);
	}
	else 
	{
		{
		rem=n%2;
		sum=sum+rem*place;
		place=place*10;
	}binary(n/2);

	}



}
