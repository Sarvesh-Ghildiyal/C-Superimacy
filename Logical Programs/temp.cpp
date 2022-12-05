#include<stdio.h>
#include<stdlib.h>
int main()

{
	FILE *fp;
	fp=fopen("string.txt","r");
	char ch;
	if(fp==NULL)
	{
		puts("cannot be oopened");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		 break;
		printf("%c",ch);
	}
	fclose(fp)
	;return 0;
}
