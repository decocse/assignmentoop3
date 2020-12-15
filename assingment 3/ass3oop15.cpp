#include<iostream>
using namespace std;
class balance{
	public:
	int accno;
	int balance;
	int date[10];
	

};
class transaction{
	public:
	int amount;
	int accnotype;
	char type[2];
	void withdrawl(int amount);
	void deposit(int amnt);
	friend class balance;

};
void transaction::withdrawl(int amntuser)
{
	if(amntuser>amount||amount<=0)
	{
		cout<<"not available\n";
	}
	else{
		amount=amount-amntuser;
	}
}
void transaction::deposit(int amnt)
{
	amount+=amnt;
	cout<<"deposited\n";
}
int main()
{
	transaction t;
	
	while(1){
		int amnt;
	int ch;
	cout<<"enter 1 for withdrawl\nenter 2 for deposit\nenter 0 to exit\n";
	cin>>ch;
	switch(ch)
	{
		case 1: {cout<<"enter the amount to be withdraw\n";
		cin>>amnt;
		 t.withdrawl(amnt);
		break;
		}
		case 2:
		cout<<"enter the amount to be deposited\n";
		cin>>amnt;
		 t.deposit(amnt);

		break;
		case 0: cout<<"exiting the code\n";
		exit(0);
	}
	}
}
