//peak finding
#include<stdio.h>
//first u get array and its starting point and length in the function
int peak(int array[],int lower,int upper)
{
	//now you find its mid point
	int mid=(lower+upper)/2;
	
	//now if the mid element is the local peak then you print the output i.e its index else:
	if(array[mid]>=array[mid-1] && array[mid]>=array[mid+1])
	 return mid;
	 
	// you check if where you want to go for finding local peak left side or right side?
	//its fun isn't it>
	if(array[mid]<array[mid-1])
	  peak(array,mid+1,upper);
	  
	//if left side doesnot have greater value than mid then you would go for right side for 
	//finding local peak else you would go to left side and here you wont be comin.
	peak(array,lower,mid-1);
}
int main()
{
	int array[]={1,6,8,9,7,5,2,4,6,9,7,8,3,2,5};
	int len=sizeof(array)/sizeof(array[0]);
	int lp=peak(array,0,len);
	printf("index of local peak is %d .",lp);
}
