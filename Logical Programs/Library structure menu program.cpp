//Library structure menu program
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void add_book(void);
void book_info(void);
void list_books_of_author(void);
void title_of_book(void);
void count_of_books(void);
void list_of_books_in_ascending_order(void);
void accession_number(void);

int count;// for counting already entered no. of books
int elements;//for no. of elements already in library
struct library
{
	int acn; //accession number of book
	char title[50];
	char author[50];
	int price;
	int flag; //Flag 0 for issued and 1 for unissued
}b[100]={
	1, "Let Us C", "Yashavant Kanethkar", 258, 1,
	2, "Data Structure Through C", "Yashavant Kanethkar", 300, 1,
	3, "Let Us C++", "Yashavant Kanethkar", 220, 1,
	4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,
	5, "The Two Towers", "J. R. R. Tolkien", 560, 0,
	6, "The Hobbit", "J. R. R. Tolkien", 550, 1,
	7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0
};
int main()
{
	int ch,c;
	while(1){
		printf("\n\t1> Add book information");
		printf("\n\t2> Display book information");
		printf("\n\t3> List all books of given author");
		printf("\n\t4> List the title of specified book");
		printf("\n\t5> List the count of books in the library");
		printf("\n\t6> List the books in the order of accession number");
		printf("\n\t7> Exit");
		printf("\n\t");
		fflush(stdin);
		printf("\n\tPlease make a choice ");
	    int	c=scanf("%d",&ch); //For checking if input is invalid
	    if(c==0)
	    {
	    	printf("\n\t Invalid choice ");
	        continue;
		}
		
	    switch(ch)
	    {
	        case 1:
	          accession_number(); //for knowing position in which new data a book should be entered
			  add_book();
		      break;
			case 2:
			  book_info();
			  break;
			case 3:
			  list_books_of_author();
			  break;
			 case 4:
			   title_of_book();
			   break;
			  case 5:
			    count_of_books();
				break;
			  case 6:
			    list_of_books_in_ascending_order();
				break;
			  case 7:
			    //clear screen
				printf("\n\tThank YOU %c",1);
				exit(0);
		      default:
			   //clear screen
			   printf("Invalid choice");
			   continue;	
		}
	}
	return 0;
}
void accession_number(){
	//for counting already entered no. of books
	for(int i=0;i<100;i++)
	{
		if(b[i].acn=='\0')
		{
			elements=i;
			count=b[i-1].acn;
			break;
		}
	}
}
void add_book(void){
    
	b[elements++].acn=count++;
    printf("%d",elements);
}
void book_info(void){
	printf("hello");
}
void list_books_of_author(void){
	printf("hello");
}
void title_of_book(void){
	printf("hello");
}
void count_of_books(void){
	printf("hello");
}
void list_of_books_in_ascending_order(void){
	printf("hello");
}
