//Multidimensional array
#include<stdio.h>
int main()
{
	int array[3][2]={1,98,2,95,3,100};
	for(int i=0;i<3;i++)
	{
		printf("%d=%u\n%d=%u\n",array[i][0],&array[i][0],array[i][1],&array[i][1]);
	}
	printf(":::::::\n");
	for(int i=0;i<3;i++)
	 printf("%u\n%u\n",&array[i][0],&array[i][1]);
	printf(":::::::\n");
	
	//Using pointers
	printf("using pointers\n");
	int *j=&array[0][0];
	for(int i=0;i<6;i++)
	{
		printf("%d=%u\n",*j,j);
		j=j+1;
	}

	//Treating parts of an array as an array
	printf("::::::\n\n");
	for(int i=0;i<3;i++)
	 printf("%d=%u\n",*(array[i]+0),array[i]);
   
    //Accessing array elements using pointers
    printf(":::::::\n");
	for(int i=0;i<3;i++){
		for(int k=0;k<=1;k++){
			printf("%d ",*(array[i]+k));
			if(k==1)
			 printf("\n");
		}
	}
}
