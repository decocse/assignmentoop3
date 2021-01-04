#include<iostream>
using namespace std;
int bat=0,ball=0,all=0,ballallr=0;
class cricketer{
    public :
    string name;
    string dob;
    int matchespl;
};
class batsman:cricketer{
    public:
    int trs;
    double avscore;
    void getbatdetails()
    {
        cin.ignore();
        getline(cin,name);
        
        getline(cin,dob);
         cin>>matchespl;
         cin>>trs;
         avscore=trs/matchespl;
        bat++;
    }
    void show()
    {
        
    cout<<"NAME\t"<<name<<"\t"<<"DOB\t"<<dob<<"\t"<<"MATCHES PLAYED\t"<<matchespl<<"\t"<<"TOTAL RUNS SCORED\t"<<trs<<"\t"<<"AVERAGE SCORE\t"<<avscore<<"\n";
    }
    void showallr()
    {
    cout<<"NAME\t"<<name<<"\t"<<"DOB\t"<<dob<<"\t"<<"MATCHES PLAYED\t"<<matchespl<<"\t"<<"TOTAL RUNS SCORED\t"<<trs<<"\t"<<"AVERAGE SCORE\t"<<avscore<<"\t";
    }
};
class bowler:cricketer
{
    public:
    int wickets;
    int noofovers;
    int runsconce;
    double economy;
     void getbowlerdetails()
     {
          cin.ignore();
        getline(cin,name);
        //cin.ignore();
        getline(cin,dob);
         cin>>matchespl;
         cin>>wickets;
         cin>>noofovers;
         cin>>runsconce;
         economy=runsconce/noofovers;
        ball++;
     }
     void getballallround()
     {
         cin>>wickets;
         cin>>noofovers;
         cin>>runsconce;
         economy=runsconce/noofovers;
         ballallr++;
     }
     void showball()
    {
        
    cout<<"NAME\t"<<name<<"\t"<<"DOB\t"<<dob<<"\t"<<"MATCHES PLAYED\t"<<matchespl<<"\t"<<"WICKETS\t"<<wickets<<"\t"<<"ECONOMY\t"<<economy<<"\n";
    }
    void showballallr()
    {
        cout<<"WICKETS\t"<<wickets<<"\t"<<"ECONOMY\t"<<economy<<"\n";
    }
};
class allrounder:batsman,bowler{
    public:
    void allroundd()
    {
     getbatdetails();
     getballallround();
     all++;
    }
    void showallround()
    {
        showallr();
        showballallr();
    }
};
batsman b[1000];
bowler bll[1000];
allrounder alr[1000];
int main()
{
    int i=0,j=0;
    int k=0,m=0;
    while(1)
    {
        int ch;
        cout<<"ENTER YOUR CHOICE\n1 BATSMAN\n2 DISPLAYING BATSMAN\n3 BOWLER\n4 DISPLAYING BOWLER\n5 ALLROUNDER\n6 DISPLAYING ALL ROUNDER\n";
        cin>>ch;
        switch(ch)
        {
            case 0:
            cout<<"THANK YOU"<<"\n";
            exit(0);
            break;
            case 1:
            cout<<"BATSMAN\n";
            cout<<"ENTER PLAYER NAME\nPLAYER DOB IN dd/mm/yyyy format\nMATHCHES PLAYED\nTOTAL RUN SCORED\n\n";
            b[i].getbatdetails();
            i++;
            break;
            case 2:
            cout<<"DISPLAYING BATSMAN\n\n";
            for(int j=0;j<i;j++)
            {
            b[j].show();
            }
            break;
            case 3:
            cout<<"BOWLER\n";
            cout<<"ENTER PLAYER NAME\nPLAYER DOB IN dd/mm/yyyy format\nMATHCHES PLAYED\nWICKETS\nNUMBERS OF OVERS\nRUNS CONCEDED\n";
            bll[k].getbowlerdetails();
            k++;
            break;
            case 4:
            cout<<"DISPLAYING BOWLER\n";
            for(int j=0;j<k;j++)
            {
                bll[j].showball();
            }
            break;
            case 5:
            cout<<"ALL ROUNDER\n";
            cout<<"ENTER PLAYER NAME\nPLAYER DOB IN dd/mm/yyyy format\nMATHCHES PLAYED\nTOTAL RUN SCORED\nWICKETS\nNUMBERS OF OVERS\nRUNS CONCEDED\n";
            alr[m].allroundd();
            m++;
            break;
            case 6:
            cout<<"DISPLAYING ALL ROUNDER\n";
                for(int j=0;j<m;j++)
                {
                    alr[j].showallround();
                }
                break;
        }
            
    }
}
