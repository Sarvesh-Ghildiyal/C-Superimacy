#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void def_sub_str(int );
char str[50]="My name is Sarvesh Ghildiyal";
char s1[10],s2[10],temp[10],sub_str[20],newstr[50];
int start;
void string(void)
{
	printf("\n\nEnter string to find > ");
	scanf("%s",&s1);
	printf("\n\n:::::\n\nEnter string to replace > ");
	scanf("%s",&s2);
	
}
void find(void)
{
    int i=0,end=strlen(s1);
    //First setting a starting point for string to be searched 
    for(;i<strlen(str);i++)
    {
    	if(str[i]==s1[0])
    	{
    		start=i;
    		break;
		}
	}
	//printf("%d\n",i);

	// Now, checking if our string has the string we were searching for and storing it in temp variable
	for(int j=0;i<end+i,j<end;i++,j++)
	{
		if(str[i]==s1[j])
		 temp[j]=str[i];
	}
	//printf("%s\n%d\n",temp,i);
	
	//Now at last calling replace function
	if(!strcmp(temp,s1))
	  def_sub_str(i);
	else
	 puts("Word not found in the string");
	
}
void def_sub_str(int i)
{
	int j=0;
	for(;i<strlen(str);i++,j++)
	{
		sub_str[j]=str[i];
	}
	//Giving last element of the string i.e '\0'
	sub_str[j]='\0';
	//printf("%s",sub_str);
}
void replace(void)
{
	int i=start;
	for(int j=0;j<strlen(s2);j++,i++)
      str[i]=s2[j];
	//Giving last element of the string i.e '\0'
	str[i]='\0';
	
	strcat(str,sub_str);
	
}
int main()
{
	system("color 0b");
	printf("\t\tString before manipulation: ");
	printf(" %s\n",str);
	string();
	find();
	// IN find function you would find a substr fun, which mooves all element of string after finding word into a substr
	replace();
	printf("\n\n\t\tString after manipulation: %s",str);
	
}
