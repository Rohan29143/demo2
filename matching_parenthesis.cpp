#include<iostream>
using namespace std;
#include<conio.h>
#include<process.h>
#define max 50

class stack
{
    public:
    int item[max],top;
    void create();
    void push(int );
    int pop();
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
        cout<<"Stack Overflow!";
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
        cout<<"Stack Underflow!";
    }
    else
    {
        return item[top--];
    }
}
int main()
{
    stack ob;
    char exp[50],ch;
    int i=0,t=0;
    ob.create();
    cout<<"Enter expression";
    cin>>exp;
    while(exp[i]!='\0')
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
        {
            ob.push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']'||exp[i]=='}')
        {
            ch=ob.pop();

         if((ch=='(')!=(exp[i]==')')  || (ch=='[')!=(exp[i]==']') || (ch=='{') != (exp[i]=='}'))
         {
            t=1;
            break;

         }
        }
        i++;
    }
    if(ob.top!=-1||t==1)
    {
        cout<<"Invalid";
    }
    else
    {
        cout<<"Valid";
    }

getch();
}
