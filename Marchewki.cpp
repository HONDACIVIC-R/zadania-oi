#include<iostream>
using namespace std;

int main ()
{
    int n,m,x=0,i;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>m;
        if (x<=m)
        {
            x=m;
        }
    }
    cout<<x;
}
