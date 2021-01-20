#include<bits/stdc++.h>
#include<queue>
#include<string>
#include<vector>
#include<map>
#include<iterator> 
using namespace std;
int see[1000];
int d = 0;
class student {
public:
    int roll;
    int score;
    string name;
    void takedata()
    {
        cout << "ENTER STUDENT ROLL SCORE AND NAME\n";
        cin >> roll;
        cin >> score;
        see[d++] = score;
        cin.ignore();
        getline(cin, name);
    }
    string getname()
    {
        return name;
    }
    int getroll()
    {
        return roll;
    }
    int getscore()
    {
        return score;
    }
    void printdata()
    {
        cout << "NAME:\t" << name << "\tROLL\t" << roll << "\tSCORE\t" << score << "\t\n";
    }
    friend ostream& operator<<(ostream& o, student& s);
   
};
ostream& operator<<(ostream& o, student& s)
{
    o << s.name << "\t" << s.roll << "\t" << s.score << "\n";
    return o;
}

 
//main part************************************************
int main()
{
    
   
    student s1[200000];
    map<int ,int>sp;
    int n;
    while (1)
    {
        bool flag=0;
        cout << "ENTER YOUR CHOICE\n";
        int ch;
        cin >> ch;
        switch (ch)
        {

        case 1: {
            cout << "enter the size you want for student\n";
            //int n;
            cin >> n;

            cout << "recorded\n";
            break;
        }
        case 2: {
            for(int i=0;i<n;i++){
                s1[i].takedata();
                //s.push_back(s1[i]);
                sp.insert(pair<int,int>(s1[i].getroll(),s1[i].getscore()));
            }
            break;
        }
        
     case 3:
     {
         cout<<"enter roll no. to be searched\n";
         int rllno;
         cin>>rllno;
         for(auto itr=sp.find(rllno);itr!=sp.end();itr++)
         {
            cout<<"roll number\t"<<itr->first<<"\t"<<"score\t"<<itr->second<<"\n";
            flag=1;
            break;
         }
         if(flag=0){
         cout<<"no roll is present\n";}
         break;
     }
     case 4:
     {
         cout<<"displaying data\n";
         for(int i=0;i<n;i++)
         {
             s1[i].printdata();
             
         }
         break;
     }
       
    }
}
}
