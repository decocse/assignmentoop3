#include<iostream>
using namespace std;
inline int swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;

}
int main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<"swap of two no. :"<<a<<" "<<b<<endl;
	return 0;
}
