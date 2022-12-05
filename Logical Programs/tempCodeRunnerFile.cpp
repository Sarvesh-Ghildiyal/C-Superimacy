#include<iostream>
using namespace std;
int main()
{
    int t,n,m,k,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m>>k>>x;
        int year=0;
        while(x){
            x=x-n;
            if(year%k==0)
             x=x-m;
            year++;
        }
        if(year%k==0)
         printf("yes\n");
        else
         printf("no\n");
    }
}