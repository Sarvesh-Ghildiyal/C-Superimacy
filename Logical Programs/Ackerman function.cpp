#include<stdio.h>
int A(int,int);
int main()
{
	int a,b;
	char choice;
	do{
	printf("Enter 2 non negative arguments\n");
	scanf("%d %d",&a,&b);
	if(a>=0 && b>=0)
      printf("The value of given ackerman function is %d",A(a,b));
	else{
		printf("Wrong Entry. Wanna try again y/n ");
		fflush(stdin);
		scanf("%c",&choice);
	}
	}while(choice=='y');
}
int A(int m,int n)
{
	if(m==0)
	 return (n+1);
	else if(m>0 && n==0)
	 return(A(m-1,1));
	else if(m>0 && n>0)
	 return(A(m-1,A(m,n-1)));
}
