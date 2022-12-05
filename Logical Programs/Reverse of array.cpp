#include <stdio.h>
#include <stdlib.h>
int main(){
	system("color 0B");
    int n,i,*ptr,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc
    if(ptr==NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("\nEnter elements of array:\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("\nSum=%d",sum);
    free(ptr);
    return 0;
}


