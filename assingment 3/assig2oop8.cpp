#include<iostream>
using namespace std;
struct info
{
	int roll[100];
	int score[100];
};
void function(int roll[],int score[])
{
	struct info p;
	int n;
	cout<<"enter number of students"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p.roll[i]>>p.score[i];
	}
		for(int i=0;i<n;i++)
	{
		cout<<p.roll[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<p.score[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	struct info p;
	cout<<"enter the size of student"<<endl; 
	int n,z;
//	cout<<"enter number"<<endl;
	cin>>n;
	cout<<"enter roll no."<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p.roll[i];
	}
	cout<<"enter score"<<"\n";
	for(int i=0;i<n;i++)
	{
		cin>>p.score[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<p.roll[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<p.score[i]<<" ";
	}
	cout<<"\n";
		cout<<"press 1 for function"<<endl;
	cin>>z;
	switch(z)
	{
		case 1: function(p.roll,p.score);
		break;
	}
	return 0;
}
