#include<iostream>
using namespace std;
int main()
{
    int t,n,m,k,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m>>k>>x;
        int ny,my,md,nd;
        ny=x/n;
        md=(ny/k)*m;
        nd=x-md;
        if((x/n)%k==0)
         printf("yes\n");
        else 
          printf("no\n");
    }
}
/*try:
    for i in range(int(input())):
        n,m,k,x=list(map(int,input().split()))
        
        if (x%((n*k)+m) == 0):
            ans = "yes"
        elif (x%((n*k)+m) - (n*(k-1)) > 0):
            ans ="yes"
        else:
            ans = "no"
            
        
        print (ans)
except:
    pass    */