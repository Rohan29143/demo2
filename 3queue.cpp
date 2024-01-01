#include<iostream>
#include<conio.h>
#include<process.h>
#define max 3
using namespace std;

class queue {
        int item[max],front , rear;
        public:
    void create();
    void insert(int);
    int remove();
    void isempty();
    void isfull();
    void status();
    
};

    void queue :: create()
    {

        front=-1;
        rear=-1;
        cout<<"Queue is created\n";
    }

    void queue :: insert (int x)
    {
        if(rear==max-1)
        {
            cout<<"Queue is full";
        }
        else 
        {
            ++rear;
            item[rear]=x;
        }
    }

    int queue :: remove()
    {      // int x;
        if(rear==front)
        {
            cout<<"Queue is empty";
        }
        else
        {
            ++front;
            return item[front];

        }
        
    }

    void queue :: isfull()
    {
        if(rear==max-1)
        {
            cout<<"Queue is full";
        }
        else 
        {
            cout<<"Queue is not full";
        }
    }

    void queue :: isempty()
    {
        if(rear==front)
        {
            cout<<"Queue is empty";
        }
        else 
        {
            cout<<"Queue is not empty";
        }
    }

    void queue :: status()
    {
        int i;
        for(i=front+1;i<=rear;i++)
        {
            cout<<" "<<item[i];
        }
    }

int main()
{
    int ch,x,r;
    queue ob;
   
    
    do 
    {   
        cout<<"\n1.Create \t 2.Insert \t 3.Remove \t 4. Isempty \t 5. Isfull \t 6. Status\t 7.Exit\n";
            cout<<"\nEnter your chose\t";
            cin>>ch;
        switch(ch)
    {
        case 1:ob.create();
                break;

        case 2:cout<<"\nEnter the elemen\n";
                cin>>x;
                ob.insert(x);
                break;
        case 3:r=ob.remove();
                cout<<"The removed element is\n"<<r;
                break;

        case 4:ob.isempty();
                break;
        case 5:ob.isfull();
                break;
        case 6:ob.status();
                break;
        case 7:exit(0);
                break;

    }  
    
}while(ch!=7);
return 0;
}

