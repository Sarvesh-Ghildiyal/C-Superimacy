//Selection sort
#include<stdio.h>
int main()
{
	int array[5]={44,33,55,22,11};
	int n=sizeof(array)/sizeof(array[0]);
	int i,j,position,swap;
	for(i=0;i<n-1;i++)
	{
		position=i;
		for(j=i+1;j<n;j++)
		{
			if(array[position]>array[j])
			      position=j;
		}
		if(position!=i)
		{
			swap=array[position];
			array[position]=array[i];
			array[i]=swap;
		}
	}
	for(i=0;i<n;i++)
	 printf("%d ",array[i]);
}
