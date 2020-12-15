#include<iostream>
using namespace std;
class time
{
	public:
		void hourformat(){
	int hour,min,sec;
	cout<<"enter the time zone in 24 hrs format"<<endl;
	cin>>hour>>min>>sec;
	cout<<hour<<" hours "<<min<<" mins "<<sec<<" seconds "<<endl;
}
	void ampmformat()
	{
		string a;
		cout<<"enter am or pm"<<endl;
		cin>>a;
		int h,m,s;
			cout<<"enter the time zone"<<"\n";
		cin>>h>>m>>s;
		cout<<h<<" : "<<m<<" : "<<s<< a <<endl;
	}
};
int main()
{
	time t;
	int i;
	cout<<"enter your choice\n 1 for hr format 2 for ampm"<<endl;
	cin>>i;
	switch(i)
	{
	case 1:	t.hourformat();
	break;
	case 2: t.ampmformat();
	break;
}
	return 0;
}
