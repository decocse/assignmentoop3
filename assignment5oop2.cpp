#include<iostream>
#include<stdlib.h>
using namespace std;
int Student=0;
class student{
public :


string name;
string email;
    void taking_data()
    {
        cin.ignore();
        cout<<"ENTER THE NAME AND EMAIL ID OF THE STUDENT\n\n";
       getline(cin,name);
        //cin.ignore();
        getline(cin,email);
        
        cout<<"Data entered successfully\n";
        Student++;
    }
    void display_studentdata()
        {
            for(int i=0;i<Student;i++)
            {
                cout<<"NAME :";
                for(int j=i;j<name.size();j++)
                {
                cout<<name[j];
                }
                cout<<"\t"<<"EMAIL: ";
                for(int j=i;j<email.size();j++)
                {
                    cout<<email[j];
                }
                cout<<"\n";
            }
        }
    
    
};



class book{
    public:
int bookid;
int sno;
string title;
string author;

};
class node{
public:
int data;
int sno;
string tie;
string aname;
node*next;
node*head=NULL;


//book storing________________________________

void bookstore(int bkid,int sno,string tile,string authorname)
{
    
    node*temp;
    temp=new node();
    temp->data=bkid;
        temp->sno=sno;
        temp->tie=tile;
        temp->aname=authorname;
        
        temp->next=NULL;
    if(head==NULL)
    {
        
        head=temp;
        cout<<"data entered\n";
    }
    else{
        node*temp2;
        temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
        cout<<"OK entered\n";
        
    }
}
void display()
{
node*temp=head;
//temp=new node();
while(temp!=NULL)
{
    cout<<temp->data<<" "<<temp->sno<<" "<<temp->tie<<" "<<temp->aname<<"\n";
    temp=temp->next;
}
}
void bookissue(int bkid)
{
    node*temp=head;
    node*prev=NULL;
  //  temp=new node();
    prev =new node();
    if(head->data==bkid)
    {
        head=temp->next;
        delete temp;
        cout<<"book avaliable\n";
    }
    
    else{
    while(temp!=NULL)
    {
        if(temp->data==bkid)
        {
            cout<<"book available and issued\n";
           prev->next=temp->next;
            delete temp;
        }
        prev=temp;
        temp=temp->next;
        return;
    }
    cout<<"book not avaliable\n";
    }
}
void bookreturn(int bkid,int srno,string tile,string auname)
{
    node*temp=head;
    node*temp2;
    temp2=new node;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    //temp2=temp->next;
    temp2->data=bkid;
    temp2->sno=srno;
    temp2->tie=tile;
    temp2->aname=auname;
    temp2->next=NULL;
    temp->next=temp2;
    cout<<"BOOK ADDED SUCCESSFULLY\n\n";
}
};


     

//main function_____________________________________________________________________
//__________________________________________________________________________________

int main()
{
    node s;
    student su;
    int j=0;
    int i=0;
    //node*head=NULL;
    //head=new node();
    cout<<"WELCOME TO THE LIBRARY\n\n";
    cout<<"**********************\n\n";
while(1){
    static int n=0;
    static int facmem=0;
    
    cout<<"ENTER YOUR CHOICE\n\n";
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 0: cout<<"Thank you\n";
        cout<<"\n\n\n\n";
        exit(0);
        break;
        
        
        case 2: 
        if(n>0){
            cout<<"DISPLAYING THE ELEMENTS OF THE LIBRARY :\n";
            s.display();
        }
        else{
            cout<<"library is empty\n";
        }
        break;
        case 3: cout<<"enter bookid to be issued\n";
        //int n=0;
        int bkidno;
        if(n<=3){
        cin>>bkidno;
        n++;
        s.bookissue(bkidno);
        }
        if(n>3)
        {
            cout<<"you have reached your limit\nreturn your 3 books first\n";
        }
        break;
        case 4: cout<<"enter book id   serial number    title    author name to be added\n\n";
        if(n>=0){
        node*hea;
        hea=new node();
        cin>>hea->data>>hea->sno>>hea->tie>>hea->aname;
        s.bookreturn(hea->data,hea->sno,hea->tie,hea->aname);
        n--;
        }
        if(n<0)
        {
            cout<<"first issue a book\n";
        }
        break;
        case 5:
            cout<<"TAKING DATA OF STUDENTS\n\n";
            su.taking_data();
            break;


        case 6: 
        cout<<"DISPLAYING THE NAME AND EMAIL OF STUDENT WHO HAVE ISSUED BOOKS\n";
            su.display_studentdata();
        break;

        case 1:cout<<"\n ADD A BOOK TO THIS LIBRARY\n";
        cout<<"___________________________________________________\n";
        cout<<"***************************************************\n";
        node*head=new node();
        int bkid,sno;
        string tile;string authorname;
        tile=new char[100];
        authorname=new char[100];
        cout<<"enter book id  serialno.  title  and  author name respectively\n";
        cin>>head->data>>head->sno;
        cin>>head->aname>>head->tie;
        s.bookstore(head->data,head->sno,head->aname,head->tie);
        break;
        
    }
}
}
