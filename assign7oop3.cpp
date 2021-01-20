#include<iostream>
#include<string>
#include<vector>
#include<queue> 
using namespace std;

class student{
    public:
    int roll;
    int score;
    string name;
     student()
    {
        cout<<"ENTER STUDENT ROLL SCORE AND NAME\n";
        cin>>roll;
        cin>>score;
        
        cin.ignore();
        getline(cin,name);
    }
      string getname()
    {
        return name;
    }
    int getscore()
    {
        return score;
    }
    int getroll()
    {
        return roll;
    }
   
    void printdata()
    {
        cout<<"NAME:\t"<<name<<"\tROLL\t"<<roll<<"\tSCORE\t"<<score<<"\t\n";
    }
   friend ostream& operator<<(ostream&o,student&s);
};
ostream& operator<<(ostream&o,student&s)
 {
    o<<s.name<<"\t"<<s.roll<<"\t"<<s.score<<"\n";
    return o;
}
int main()
{
    queue<student>q;
    while(1)
    {
        cout<<"enter your choice\n\n";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                q.push(student());
                break;
            }
            case 2:
            {
                while(!q.empty())
                {
                    cout<<q.front();
                    q.pop();
                }
                break;
            }
            case 0:
            {
                cout<<"thankyou\n\n";
                exit(0);
            }
        }
    }
}
