#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(short x, short y);    //here we declare the gotoxy function//
main()
{
 gotoxy(30,12);                      //now where we want to call  gotoxy function //
 printf("Hi i am,here");
 return 0;
}
void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
