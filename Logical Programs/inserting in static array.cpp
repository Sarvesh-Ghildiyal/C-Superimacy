#include<stdio.h>
int insert(int array[],int index,int value)
{
	 int i=4;
	if(array[index]=='\0')
	 array[index]=value;
	else
	{
		//first find initial point from backwards from where you gonna start shifting
		for(;i>=0;i--)
		{
			if(array[i]=='\0' && array[i-1]!='\0')
			 break;
		}
		//after that when you get that point strart shifiting till you reach your index or destiny point
		for(i;i>=0;i--)
		{
			if(i==index)
			{
				array[index]=value;
				break;
			}
			else
			 array[i]=array[i-1];
		}
	}
}
int main()
{
	static int array[5]={5,10,20,3};
	printf("Enter index you want to enter ");
	int index;
	scanf("%d",&index);
	printf("Enter value you want to enter ");
	int value;
	scanf("%d",&value);
	insert(array,index,value);
	for(int i=0;i<5;i++)
	 printf("%d ",array[i]);
}
