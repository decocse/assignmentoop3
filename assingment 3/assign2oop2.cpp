#include<iostream>
using namespace std;
inline int square(int x)
{
	return x*x;
}
int main()
{
	int t;
	cin>>t;
	while(t>0){
	
	int n;
	cin>>n;
	cout<<"the square of two numbers:"<<square(n)<<endl;
	t--;
}
	return 0;
}
