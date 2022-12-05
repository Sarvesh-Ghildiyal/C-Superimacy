#include<stdio.h>
int main()
{
	int i=0,a,b,c;
	while(i<=500)
    {
    	if(i<10)
    	   a=i%10;
    	
		else if(i>=10 && i<100)
    	{
		    a=i%10;
		    b=(i/10)%10;
		}
		
		else
		{
			a=i%10;
			b=(i/10)%10;
			c=(i/100)%10;
        }
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
       {
	    printf("%d\n",i);
       }
       i++;
	}
	
}
