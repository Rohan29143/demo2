#include<iostream>
#include<string.h>
#define max 50
using namespace std;
class stack{
    public:
    int item[max],top;
    void create();
    void push(int);
    int pop();
};
void stack::create(){
    top=-1;
}
void stack::push(int el){
    if(top==max-1){
        cout<<"\nStack Overflows.";
    }
    else{
        top++;
        item[top]=el;
    }
}
int stack::pop(){
    if(top==-1){
        cout<<"\nStack Underflows.";
        return 0;
    }
    else{
        return(item[top--]);
    }
}

int main()
{
    int i=0,j=0;
    char infix[50],pre[50],r;
    stack opstack,oprand;
    
    cout<<"\nEnter exp\n";
    cin>>infix;
    strrev(infix);
    opstack.create();
    oprand.create();

    while(infix[i]!='\0')
    {
        if(infix[i]==')'||infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/')
        {
            opstack.push(infix[i]);
        }

        else if(infix[i]=='('){
            while(opstack.top!=-1){
                r=opstack.pop();
                if(r!=')'){
                    oprand.push(r);
                }
            }
        }
        else
        {
            oprand.push(infix[i]);

        }
        i++;

    }
    while(opstack.top!=-1){
        r=opstack.pop();
        opstack.push(r);
    }
    while(oprand.top!=-1){
        pre[j]=r;
        j++;
    }


pre[j]='\0';
    cout<<"\nOur desired prefix string:"<<pre;
    cout<<1;
    return 0;
}
