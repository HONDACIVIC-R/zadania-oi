#include <iostream>
using namespace std;

int main()
{
	int p,n,l;
	cin>>p>>n;
	for(int l=n;l<=4;l++)
	{
		p=(p/3)*4;
	}
	cout<<p/4;
	return 0;
}
