//Insertion sorting
#include<stdio.h>
int main()
{
	int array[]={44,33,55,22,11};
	int i,swap,value,hole;
	for(i=1;i<5;i++){
		value=array[i];
		hole=i;
		while(hole>0 && array[hole-1]>array[hole]){
			swap=array[hole-1];
			array[hole-1]=array[hole];
			array[hole]=swap;
			hole--;
		}
	}
	for(i=0;i<5;i++){
		printf("%d ",array[i]);
	}
}
