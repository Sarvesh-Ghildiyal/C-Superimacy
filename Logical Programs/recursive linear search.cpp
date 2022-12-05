#include<stdio.h>
int search(int a[],int size,int num);
int main()
{
	int array[]={1,2,3,4,5,6,7,8,8,89,10};
	printf("Enter no. up for search ");
	int num;
	scanf("%d",&num);
    int i=search(array,10,num);
    (i==-1)
     ? printf("The no. is not present ")
     : printf("Index is %d ",i);
     
}
int search(int a[],int size,int num)
{
    static int i;
    i++;
	if(i>=0)
	{
	 if(a[i]==num)
	  return i;
	 else
	  search(a,size,num);
   }
   else 
    return -1;
     
}
