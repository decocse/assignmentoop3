#include <iostream>
using namespace std;
class applicant
{
	public:
		int id=1;
		string name;
		int score;
	public:
	void getdetails();
	void showdetails();	
};
void applicant::getdetails()
{
	
	cout<<"enter the name"<<endl;
	cin>>name;
	cout<<"enter the score"<<endl;
	cin>>score;

}
void applicant::showdetails()
{
	
	cout<<"number of students enrolled"<<" "<<id<<"\n";
	cout<<"applicant name"<<" "<<name<<"\n";
	cout<<"score"<<" "<<score<<"\n";
	id++;

}
int main()
{
	bool t=true;
	while(t){
	applicant a;
	a.getdetails();
	a.showdetails();
	int opt;
	cout<<"press 1 if you want to continue else 2 to exit"<<"\n";
	cin>>opt;
	switch(opt)
	{
		case 1:t=true;
		break;
		case 2: t=false;
		break;
	}
}
	return 0;
}
