#include <iostream>
using namespace std;

int main()
{
	int a,b,x,y,r,n,m;
	cin>>x;
	cin>>y;
	cin>>n;
	a=x;
	b=y;
	r=x%y;
	
	while(r!=0)
	{
		x=y;
		y=r;
		r=x%y;
	}
	cout<<y<<endl;
	m=a*b/y;
	cout<<m<<endl;
	cout<<m*(n-1)<<endl;
	
	return 0;
}
