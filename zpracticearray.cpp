#include<iostream>
using namespace std;
#include<conio.h>
#define max 50
class array
{
    int item[max],cnt=0;
    public:
    void insert();
    int remove(int);
    void count();
    void traverse();
    void reverse();

};
void array :: insert(int x)
{
    cout<<"Enter element to insert";
    cin>>x;
    item[max]=x;
}