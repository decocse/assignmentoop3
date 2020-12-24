#include<iostream>
using namespace std;
int bat=0,ball=0,all=0;
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
         cin>>avscore;
        bat++;
    }
    void show()
    {
        
    cout<<"NAME\t"<<name<<"\t"<<"DOB\t"<<dob<<"\t"<<"MATCHES PLAYED\t"<<matchespl<<"\t"<<"TOTAL RUNS SCORED\t"<<trs<<"\t"<<"AVERAGE SCORE\t"<<avscore<<"\n";
    }
};
class bowler:cricketer
{
    public:
    int wickets;
    double economy;
     void getbowlerdetails()
     {
          cin.ignore();
        getline(cin,name);
        cin.ignore();
        getline(cin,dob);
         cin>>matchespl;
         cin>>wickets;
         cin>>economy;
        ball++;
     }
     void showball()
    {
        
    cout<<"NAME\t"<<name<<"\t"<<"DOB\t"<<dob<<"\t"<<"MATCHES PLAYED\t"<<matchespl<<"\t"<<"TOTAL RUNS SCORED\t"<<wickets<<"\t"<<"AVERAGE SCORE\t"<<economy<<"\n";
    }

};
class allrounder:batsman,bowler{
    public:
    void allroundd()
    {
     getbatdetails();
     getbowlerdetails();
     all++;
    }
    void showallround()
    {
        show();
        showball();
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
        cout<<"ENTER YOUR CHOICE\n";
        cin>>ch;
        switch(ch)
        {
            case 0:
            cout<<"THANK YOU"<<"\n";
            exit(0);
            break;
            case 1:
            cout<<"BATSMAN\n";
            cout<<"ENTER PLAYER NAME\nPLAYER DOB\nMATHCHES PLAYED\nTOTAL RUN SCORED\nAVERAGE SCORE\n";
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
            cout<<"ENTER PLAYER NAME\nPLAYER DOB\nMATHCHES PLAYED\nWICKETS\nECONOMY\n";
            bll[k].getbowlerdetails();
            k++;
            break;
            case 4:
            cout<<"DISPLAYING BOWLER\n";
            for(int j=0;j<k;j++)
            {
                bll[j].showball();
            }
            case 5:
            cout<<"ALL ROUNDER\n";
            cout<<"ENTER PLAYER NAME\nPLAYER DOB\nMATHCHES PLAYED\nTOTAL RUN SCORED\nAVERAGE SCORE\nWICKETS\nECONOMY\n";
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
