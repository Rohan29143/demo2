#include<iostream>
using namespace std;
#include<conio.h>
#include<process.h>
#define max 50
class stack 
{
    int item[max],top;
    public:
    void create();
    void push(int x);
    int pop();
    void isempty();
    void isfull();
    void status();

};
void stack :: create()
{
    top=-1;
    cout<<"Stack is created";
}
void stack :: push(int x)
{
    if(top==max-1)
    {
        cout<<"Stack Overflow";
    }
    else
    {
        ++top;
        item[top]=x;
    }
}
int stack :: pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        return item[top--];
    }
}
void stack :: isfull()
{
    if(top==max-1)
    {
        cout<<"Stack is Full";
    }
    else
    {
        cout<<"Stack is not full";
    }
}
void stack :: isempty()
{
    if(top==-1)
    {
        cout<<"Stack is empty";
    }
    else
    {
        cout<<"Stack is not full";
    }
}
void stack :: status()
{
    int i;
    for(i=top;i>=0;i--)
    {
        cout<<"\t"<<item[i];
    }
}
int main()
{
    
    stack ob;
    int r,n,ch;

    do
    {
        cout<<"1.create()\t 2.push()\t 3.pop()\t 4.isfull()\t 5.isempty()\t 6.status\t 7.exit()";
        cout<<"Enter your choise";
        cin>>ch;

        switch(ch)
        {
            case 1:ob.create();
                    break;
            case 2:
                cout<<"Enter the element";
                cin>>n;
                ob.push(n);
                break;
            case 3:
                r=ob.pop();
                cout<<"The poped element"<<r;
                break;
            case 4:
                ob.isfull();
                break;
            case 5:
                ob.isempty();
                break;
            case 6:
                ob.status();
                break;
            case 7:
                exit(0);;
                break;
        }
    }while(ch!=7);
    
    getch();
}