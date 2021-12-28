#include <iostream>
using namespace std;

int main()
{
	int k,g,m;
	char z;
	cin>>k>>g>>z>>m;
	m=g*60+m-k;
	cout<<m/60<<":"<<m%60<<endl;
	return 0;
}
