#include<iostream>
#include<string.h>
using namespace std;

class Strin{
     
     char *name;
     int length;

     public:
         Strin()
         {
            length=0;
            name=new char[length+1];
         }

         Strin(char *s)
         {
            length=strlen(s);
            name=new char[length+1];
            strcpy(name,s);
         }

         void joinstring(Strin &,Strin &);
         void display();
};

void Strin::joinstring(Strin &a,Strin &b)
{
    length=strlen(a.name)+strlen(b.name);
    delete name;
    name=new char[length+1];
    
    strcpy(name,a.name);
    strcpy(name,b.name);

}

void Strin::display()
{
    cout<<name<<endl;
}

int main()
{
    char s[]="Sarvesh";
    Strin name("s"),lname("Ghildiyal");
    
    name.display();

    Strin s1;
    
    s1=s1.joinstring(name,lname);
    s1.display();
}