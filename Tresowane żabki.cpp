#include <iostream>
using namespace std;

int main()
{
	int k,c,d=0;
	int hh,mm,ss;
	int a[d];
	cin>>k;
	k/=2;
	k=k*(k+1)/2;
	c=k%3600;
	
	hh=k/3600;
	mm=c/60;
	ss=c%60;
	cout<<d<<hh<<":"<<d<<mm<<":";
	if(ss%k==0)
	{
		cout<<d<<ss;
	}
	else
	{
		cout<<ss;
	}
	return 0;
}
