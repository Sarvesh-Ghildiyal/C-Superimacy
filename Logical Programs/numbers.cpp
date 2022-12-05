#include<stdio.h>
int main()
{
	printf("Enter limit ");
	int limit,a,pos,neg,ze;
	scanf("%d",&limit);
	while(limit)
	{
		printf("ENter any integer ");
		scanf("%d",&a);
		if(a>0)
		 pos++;
		else if(a<0)
		 neg++;
		else
		 ze++;
		limit --;
	}
	printf("positives %d negatives %d zeroes %d",pos,neg,ze);
}
