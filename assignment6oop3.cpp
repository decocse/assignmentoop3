#include<iostream>
using namespace std;
int count=0;
int count2=0;
int arrs[1000];
int arrs2[1000];
class array{
public:
int x;
void setelements()
{
    cin>>x;
    arrs[count]=x;
    count++;
}
void print()
{
    cout<<x<<"\n";
}
};
class array2{
public:
    int y;
    void setele2()
    {
        cin>>y;
        arrs2[count2]=y;
        count2++;
    }
    void print2()
{
    cout<<y<<"\n";
}
};
int subcount=count;
int subcount2=count2;
array arr[1000];
array2 arr2[1000];



void gettingmax()
{
    int maxm=0;
    int i=0;
    int subc1=count;
    while(subc1!=0)
    {
        if(arrs[i]>maxm)
        {
            maxm=arrs[i];
            i++;
        }
        else{
            i++;
        }
        subc1--;
    }
    cout<<"YOUR MAXIMUM ELEMENT FOR 1ST ARRAY IS :"<<maxm<<"\n";
}
void gettingmax2()
{
   
    int maxm2=0;
    int b=0;
    while(count2!=0)
    {
        if(arrs2[b]>maxm2)
        {
            maxm2=arrs2[b];
            b++;
        }
        else{
            b++;
        }
        count2--;
    }
    cout<<"YOUR MAXIMUM ELEMENT FOR 2ND ARRAY IS :"<<maxm2<<"\n";
}
void adding()
{
    cout<<"ADDING TWO ARRAY ELEMENTS\n";
    for(int l=0;l<subcount;l++)
    {
        arr[l].x+=arr[l].x+arr2[l].y;
    }
    cout<<"DONE AND THE RESULT STORED IN FIRST ARRAY\n";
}
int main()
{
    int d=0;
    int doa=0,subn=0,subn2=0;
    while(1)
    {
        int ch;
        cout<<"ENTER YOUR CHOICE\n";
        cin>>ch;
        switch(ch)
        {
            case 0:
            cout<<"THANK YOU\n";
            exit(0);
            break;
            case 1:
            cout<<"ENTER THE SIZE OF TWO ARRAY ELEMENTS\n";
            int n;
            cin>>n;
            cout<<"SIZE STORED\n";
            break;
            case 2:
            cout<<"ENTER THE ARRAY ELEMENTS OF 1ST ARRAY\n";
             subn=n;
            while(subn!=0)
            {
                arr[d].setelements();
                d++;
                subn--;
            }
            break;
            case 3:
            gettingmax();
            break;
            case 4:
            cout<<"ENTER THE ARRAY ELEMENTS OF THE 2ND ARRAY\n\n";
             subn2=n;
            while(subn2!=0)
            {
            arr2[doa].setele2();
            doa++;subn2--;
            }
            break;
            case 5:
            gettingmax2();
            break;

        }
    }
}
