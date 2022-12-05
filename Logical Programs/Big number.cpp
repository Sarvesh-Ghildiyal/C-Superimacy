#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define H 8
#define W 8
int main() 
{
	system("color 0b");
	char zero[H][W]={" ##### ", // H=0
                      " #   # ", // H=1
                      " #   # ", // H=2
                      " #   # ", // H=3
                      " #   # ", // H=4
                      " #   # ", // H=5
                      " ##### "};// H=6
   
    char one[H][W]={"  #",
	                "# #",
					"  #",
					"  #",
					" ###"};
   
   char two[H][W]={" ####",
                   "    #",
				   " ####",
				   " #   ",
				   " ####"};
	
    char three[H][W]={" ##### ",
                      "     # ",
                      "     # ",
                      " ##### ",
                      "     # ",
                      "     # ",
                      " ##### "};
    
 
    char four[H][W]={" #     ",
                     " #   # ",
                     " #   # ",
                     " ##### ",
                     "     # ",
                     "     # ",
                     "     # "};
 
     char  five[H][W]={" ##### ",
                     " #     ",
                     " #     ",
                     " ##### ",
                     "     # ",
                     "     # ",
                     " ##### "};
 
    char six[H][W]={" ##### ",
                    " #     ",
                    " #     ",
                    " ##### ",
                    " #   # ",
                    " #   # ",
                    " ##### "};
 
    char seven[H][W]={" ##### ",
                      "     # ",
                      "     # ",
                      "  #### ",
                      "     # ",
                      "     # ",
                      "     # "};
 
    char eight[H][W]={" ##### ",
                      " #   # ",
                      " #   # ",
                      " ##### ",
                      " #   # ",
                      " #   # ",
                      " ##### "};
 
    char nine[H][W]={" ##### ",
                     " #   # ",
                     " #   # ",
                     " ##### ",
                     "     # ",
                     "     # ",
                     "     # "};
	
   printf("Enter any 5 digit number ");
   int num;
   scanf("%d",&num);
   char str[10];
   for(int i=0;num!=0;i++)
   {
   	 str[i]=num%10;
   	 num=num/10;
   }
   strrev(str);
   
	  
}






















