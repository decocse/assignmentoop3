#include<iostream>
using namespace std;
void fint(int n)
{
	cout<<n<<endl;
}
void ffloat(float p)
{
	cout<<p<<endl;
}
int main()
{
	int n;
	cout<<"enter option from 1 to 6"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:int s;
		cout<<"enter the number"<<endl;
		cin>>s;
		fint(s);
		break;
		case 2: char t;
			cout<<"enter the characer"<<endl;
		cin>>t;
		fint(t);
		break;
		case 3: float u;
			cout<<"enter the  float number"<<endl;
		cin>>u;
		fint(u);
		break;
		case 4: double v;
			cout<<"enter the double number"<<endl;
		cin>>v;
		fint(v);
		break;
		case 5: int a;
			cout<<"enter the number"<<endl;
			cin>>a;
			ffloat(a);
			break;
			case 6: char b;
				cout<<"enter the character"<<endl;
			cin>>b;
			ffloat(b);
			break;
	}
	return 0;
}
