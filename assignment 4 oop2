#include<iostream>
#include<stdlib.h>
using namespace std;
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
};
class student:book{
public :
int c=0;
int memberid;
char *name;
char*email;



void bookreturn(int bkid,int sno,char*t,node*head)
{
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->data=bkid;
    temp->sno=sno;
    temp->tie=t;
   
    cout<<"book returned\n";
}


};

int main()
{
    node s;
    int i=0;
    //node*head=NULL;
    //head=new node();
while(1){
    cout<<"enter your choice\n";
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 0: cout<<"Thank you\n";
        cout<<"\n\n\n\n";
        exit(0);
        break;
        case 2: cout<<"display:\n";
        s.display();
        break;
        case 3: cout<<"enter bookid to be issued\n";
        int bkidno;
        cin>>bkidno;
        s.bookissue(bkidno);
        break;
        case 1:cout<<"book store\n";
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
