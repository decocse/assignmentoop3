#include<iostream>
using namespace std;
double withtax(int n,int m)
{
	double k=n*m*0.01;
	return k;
}
double withouttax(int n)
{
	double k=n*0.1;
}
int main()
{
	int n,o;
	cout<<"enter income"<<endl;
	cin>>n;
		cout<<"option (1)for chooseable tax option (2) for default tax"<<endl;
	cout<<"enter option"<<endl;
	cin>>o;
	switch(o)
	{
		case 1: cout<<"with tax"<<"\n";
		cout<<"enter tax rate"<<endl;
		int m;
				cin>>m;
			cout<<n-withtax(n,m)<<endl;
			break;
		case 2: cout<<"with default tax"<<endl;
		cout<<n-withouttax(n)<<endl;
		break;
	 }
	 return 0; 
}
