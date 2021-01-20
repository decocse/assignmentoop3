#include<iostream>
#include<string>
#include<vector>
#include<iterator> 
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
        see[d++]=score;
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
   
    void printdata()
    {
        cout<<"NAME:\t"<<name<<"\tROLL\t"<<roll<<"\tSCORE\t"<<score<<"\t\n";
    }
   friend ostream& operator<<(ostream&o,student&s);
     student operator[](student&s);
   
};
 ostream& operator<<(ostream&o,student&s)
 {
    o<<s.name<<"\t"<<s.roll<<"\t"<<s.score<<"\n";
    return o;
}
void searchit(vector<student> s)
{
                cout<<"enter the substring you want to find\n";
                string p,search;
                cin.ignore();
                getline(cin,p);
                for(auto i=s.begin();i!=s.end();i++)
                {
                    search=i->getname();
                    size_t find =search.find(p);
                    if(find!=string::npos)
                    {
                        i->printdata();
                        break;
                    }
                }
                
                
}  
bool check(string s1,string s2)
{
    int n=s1.length();
    int m=s2.length();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s1[j]==s2[j])
            {
                return true;
            }
        }
    }
    return false;
}
                
void notstring(vector<student>s)
{

    cout<<"enter the substring you want to find\n";
                
    string p,search;
    cin.ignore();
    getline(cin,p);
    for(auto i=s.begin();i!=s.end();i++)
    {
        if(!check(p,i->getname()))
        {
            i->printdata();
            break;
        }
    }

}
void highsc(vector<student>s)
{
    int max=0;
    vector<student>s2;
    for(auto i=s.begin();i!=s.end();i++)
    {
        if(max<i->getscore())
        {
            max=i->getscore();
        }
    }
      for(auto it=s.begin();it!=s.end();it++)
      {
          if(it->getscore()==max)
          {
              it->printdata();
          }
      }
}

int main()
{
    vector<student>s;
    while(1)
    {
        int ch;
        cout<<"enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1: 
            {
                cout<<"add student\n";
                s.push_back(student());
                break;
            }
            case 2:
            {
                cout<<"access the element by giving the index\n";
                int i;
                cin>>i;
                s[i].printdata();
                break;
            }
            case 3:
            {
              
                searchit(s);
                break;
            }
            case 4:
            {
                notstring(s);
                break;
            }
            case 5:
            {
                cout<<"higest score\n";
                highsc(s);
                break;
            }
            case 6:
            {
                
                for(auto it=s.begin();it!=s.end();it++)
                {
                    it->printdata();
                }
                break;
            }
            case 7:
            {
                cout<<"removing the data\n\n";
                s.pop_back();
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
