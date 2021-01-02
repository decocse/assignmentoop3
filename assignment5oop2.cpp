#include<iostream>
using namespace std;
int bookcount=0;
int arr[100000];
int k=0;
class book{
    public:
    int id;
    int serialno;
    string title;
    string author;
   
    int getserialno(){
        return serialno;
    }
    void setbookdetails()
    {
        cout<<"ENTER THE BOOK ID\nSERIAL NUMBER\nTITLE\nAUTHOR\n";
        cin>>id;
        arr[k++]=id;
        cin>>serialno;
        cin.ignore();
        getline(cin,title);
        getline(cin,author);

    }
    void show(){
            cout<<"BOOK ID:"<<"\t"<<id<<"\t"<<"SERIAL NUMBER\t"<<serialno<<"\t"<<"TITLE\t"<<title<<"\t"<<"AUTHOR\t"<<author<<"\n";
    }
};


class member{
    public:
    string name;
    string mail;
    void setdetails()
    {
        cout<<"\t\tENTER NAME AND EMAIL\n";
        cin.ignore();
        getline(cin,name);
        getline(cin,mail);
    }
    void showst()
    {
        cout<<"NAME:\t"<<name<<"\t"<<"EMAIL ID\t"<<mail<<"\n";
    }
};
class student:member
{
    public:
    void studentdata()
    {
        setdetails();
    }
    void showdatastudent()
    {
        showst();
    }
};
class faculty:member{
    public:
    void facultydetails()
    {
        setdetails();
    }
     void showdatafaculty()
    {
        showst();
    }
};
book b[10000];
book bp2[1000];
student stu[1000];
faculty fu[1000];
int de=0; 
int fcou=0;
class bookfunc:book
{
    public:
    
    void addbook()
    {
        setbookdetails();
       
        bookcount++;
    }
    
    // void removename()
    // {
    //     de--;
    // }
    void showbook()
    {
        show();
    } 
};
 bool checkbook(int b)
    {
        for(int i=0;i<bookcount;i++)
        {
            if(arr[i]==b)
            {
                return true;
            }
        }
        return false;
    }
student s[1000];
faculty f[1000];
student sp;
bookfunc bfunc[100000];
bookfunc bat;
int n=0,fac=0;
void arrange(int i)
{
    
    int temp2=arr[i];
     bat=bfunc[i];
     sp=s[i];
                  while(i<bookcount-1)
                  {
                      bfunc[i]=bfunc[i+1];
                      arr[i]=arr[i+1];
                    s[i]=s[i+1];
                      i++;
                  }
                  bfunc[i]=bat;
                  arr[i]=temp2;
                  
                  //de--;
                bookcount--;
                k--;
                
}
void removebook()
{
    int i;
         bool flag =0;
         int ide;
         cout<<"ENTER BOOK ID\n";
         cin>>ide;
         for( i=0;i<bookcount;i++)
         {
             if(arr[i]==ide)
             {
                 cout<<"BOOK REMOVED\n";
                 arrange(i);
                 return;
            }
         }
         cout<<"BOOK NOT AVAILABLE\n";
}
void issuebook()
{
    int id,flag=0,flag2=0;
    string memid;
    cout<<"ENTER MEMBER ID S FOR STUDENT AND T FOR FACULTY\n";
    cin.ignore();
    getline(cin,memid);
    if(memid=="S"||memid=="s"){
    cout<<"ENTER THE BOOK ID TO ISSUED FOR STUDENT\n";
    cin>>id;
    if(n<2){
    for(int i=0;i<bookcount;i++)
    {
        if(arr[i]==id)
        {
            cout<<"BOOK AVAILABLE AND ISSUED\n";
          
        
            stu[de++].studentdata();
        
        
        
            removebook();
            flag=1;
            n++;
        }
    }
    if(flag==0){
    cout<<"BOOK NOT AVALIABLE\n";
    }
    }
    else{
        cout<<"YOU HAVE REACHED YOUR LIMIT\nRETURN BOOK FIRST\n";
    }
    }
    if(memid=="T"||memid=="t")
    {
         cout<<"ENTER THE BOOK ID TO ISSUED FOR TEACHERS\n";
    cin>>id;
    if(fac<10){
    for(int i=0;i<bookcount;i++)
    {
        if(arr[i]==id)
        {
            cout<<"BOOK AVAILABLE AND ISSUED\n";
             
            fu[fcou++].facultydetails();
        
        
            removebook();
            flag2=1;
            fac++;
            flag2=0;
        }
    }
    if(flag2==0){
    cout<<"BOOK NOT AVALIABLE\n";
    }
    }
    else{
        cout<<"YOU HAVE REACHED YOUR LIMIT\nRETURN BOOK FIRST\n";
    }
    }
}
void returnboook()
{
    cout<<"ENTER MEMBER ID S FOR STUDENT AND T FOR FACULTY\n";
    string m;
    cin.ignore();
    getline(cin,m);
    if(m=="s"||m=="S")
    {
    int i=0;
    bfunc[i++].addbook();
    cout<<"BOOK ADDED SUCCESSFULLY\n";
    n--;
    }
    else if(m=="t"||m=="T")
    {
        int i=0;
    bfunc[i++].addbook();
    cout<<"BOOK ADDED SUCCESSFULLY\n";
        fac--;
    }
}

int main()
{
    int l=0;
    cout<<"WELCOME TO MY LIBRARY\n";
    cout<<"*********************\n\n";
    while(1)
    {
        cout<<"ENTER YOUR CHOICE\n";
        cout<<"1. ADD BOOK TO THE LIBRARY\n";
        cout<<"2. REMOVE BOOK FROM LIBRARY\n";
        cout<<"3. SHOW ALL BOOKS\n";
        cout<<"4. ALL THE STUDENT WHO HAVE ISSUED BOOKS\n";
        cout<<"5. ALL THE FACULTIES WHO HAVE ISSUED BOOKS\n";
        cout<<"6. RETURN BOOK\n";
        cout<<"7. ISSUE A BOOK\n";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 0:
            cout<<"THANK YOU\n\n";
            exit(0);
            break;
            case 1:
            cout<<"ADD BOOK\n";
            cout<<"********\n\n";
            cout<<"ENTER THE BOOK ID FOR CHECKING UNIQUENESS\n";
            int no;
            cin>>no;
            if(!checkbook(no)){
            bfunc[l++].addbook();}
            else{
                cout<<"BOOK ID SHOULD BE UNIQUE\n";
            }
            break;
            case 2:
             removebook();
             //removename();
             break;
             case 3:
               
                for(int i=0;i<bookcount;i++)
                {
                    bfunc[i].showbook();
                }
                break;
                case 4:
                cout<<"DISPLAYING ALL THE STUDENTS WHO HAVE ISSUED BOOKS \n\n";
                 for(int i=0;i<de;i++)
                {
                    stu[i].showdatastudent();
                }
                break;
                case 5:
                cout<<"DISPLAYING ALL THE FACULTIES WHO HAVE ISSUED BOOKS \n\n";
                 for(int i=0;i<fcou;i++)
                {
                    fu[i].showdatafaculty();
                }
                break;
                case 6:
                returnboook();
                break;
                case 7:
                issuebook();
                break;
        }
    }
}
