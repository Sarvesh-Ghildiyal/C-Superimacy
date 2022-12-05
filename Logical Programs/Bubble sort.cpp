//Bubble Sort
#include<stdio.h>
int main()
{
	int array[5]={44,33,55,22,11};
	int i,j,k,swap,position;
    for(k=1;k<5;k++)
    {
    	for(i=0,j=i+1;i<4;i++,j++)
	{
		if(array[i]>array[j])
		{
			swap=array[i];
			array[i]=array[j];
			array[j]=swap;
		}
	}
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",array[i]);
	}
}
