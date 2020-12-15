#include<iostream>
using namespace std;
class complex{
	int real;
	int img;
	public:
		complex(int r = 0, int i =0)  {real = r;   img = i;} 
		void setval()
		{
			cin>>real>>img;
		}
		complex operator+(complex const &c)
		{
			complex co;
			co.real=real+c.real;
			co.img=img+c.img;
			return co;
		}
		complex operator-(complex const &c)
		{
			complex com;
			com.real=real-c.real;
			com.img=img-c.img;
			return com;
		}
		
		void print()
		{
			cout<<real<<"         i"<<img<<"\n";
		}
};
int main()
{
	complex c1,c2,c3;
while(1)
{
	cout<<"enter choice 1 for addition\nchoice 2 for substraction\npress 0 to quit\n";
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 0: cout<<"finished\n";
		exit(0);
		break;
		case 1: cout<<"enter real and img number\n";
		 c1.setval();
		cout<<"enter second real and img number\n";
	
		c2.setval();
		c3=c1+c2;
		c3.print();
		break;
		//__________________________________________________________________________________________________________
		case 2: 
		cout<<"enter real and img number\n";
		 c1.setval();
		cout<<"enter second real and img number\n";
	
		 c2.setval();
		 c3=c1-c2;
		c3.print();
		break;
		
	}
}
}
