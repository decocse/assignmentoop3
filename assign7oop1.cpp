#include<iostream>
#include<string>
#include<vector>
#include<iterator> 
using namespace std;
int see[1000];
int d=0;
class student{
    public:
    int roll;
    int score;
    string name;
    void takedata()
    {
        cout<<"ENTER STUDENT ROLL SCORE AND NAME\n";
        cin>>roll;
        cin>>score;
        see[d++]=score;
        cin.ignore();
        getline(cin,name);
    }
      string getname()
    {
        return name;
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
    vector<student>s;
    student s1[200000];
    student k;
    int max=0;
    int n;
    while(1)
    {
        cout<<"ENTER YOUR CHOICE\n";
        int ch;
        cin>>ch;
        switch(ch)
        {
           
            case 1: {
            cout<<"enter the size you want for student\n";
            //int n;
            cin>>n;
           
            cout<<"recorded\n";
            break;
            }
            case 2:{
            for(int i=0;i<n;i++)
            {
               s1[i].takedata();
               s.push_back(s1[i]);
            }
            break;
            }
            case 3:{
            cout<<"showing the data\n";
            vector<student>::iterator it;
           for(it=s.begin();it<s.end();it++)
           {
               cout<<*it;
              // s1[i].printdata();
           }
           break;
            }
            case 4:{
            cout<<"size checking\n";
            int si=s.size();
            cout<<si<<"\n";
            break;
            }
            case 5:{
            cout<<"removing the last enter data\n";
            s.pop_back();
            break;
            }
             case 6:{
            cout<<"highest score details\n";
            for(int i=0;i<n;i++)
            {
                if(max<see[i])
                {
                    max=see[i];
                    k=s1[i];
                }
            }
            k.printdata();
            break;
            }
            case 7:
            {
                string p;
                string search;
                cout<<"enter the substring you want to search\n";
                cin.ignore();
                getline(cin,p);
                student substng;
                for(int i=0;i<n;i++)
                {
                     search=s1[i].getname();
                    size_t find =search.find(p);
                    if(find!=string::npos)
                    {
                        substng=s1[i];
                        break;
                    }
                }
                substng.printdata();
                break;
            }
        }
    }
}
