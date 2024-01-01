#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c=0,i;
    
    cout<<"Enter no";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout<<"NO is prime";
    }
    else
    {
        cout<<"No is not prime";
    }
    getch();
}