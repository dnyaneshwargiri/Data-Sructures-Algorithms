//============================================================================
// Name        : queue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
#define MAX 20
using namespace std;
class queue
{
public:
    int arr[20],front,rear,i,val,size,del;
    queue()
    {
        front=0;
        rear=0;

    }
    void insert_rear()
    {
    if(rear==MAX)
       {
            cout<<"\n 'overflow'";
       }
        else
        {
            cout<<"\n enter size of queue=";
            cin>>size;
            cout<<"\n enter value to be inserted=";
            for(i=0;i<size;i++)
            {
        cin>>val;
        arr[++rear]=val;
        }
        }
    }
    void dele_front()
    {
if(rear==0)
{
    cout<<"\n 'underflow'";
}
else
{
    if(front==rear)
    {
        front=0;
        rear=0;
    }
    else
    {
    del=arr[front+1];
    front++;
    cout<<"\n deleted non is="<<del;
    }
}
    }
    void display()
    {
        if(rear==0)
        {
            cout<<"\n underflow";
        }
        else
        {
            cout<<"\n";
for(i=front+1;i<=rear;i++)
{
    cout<<arr[i]<<"\t";
}
        }
    }
};
int main()
{
    queue p;
    int ch;
    while(1)
    {
    cout<<"\n 1. INSERTION";
    cout<<"\n 2. DELETION";
    cout<<"\n enter your choice=";
    cin>>ch;
    switch(ch)
    {
    case 1:
        p.insert_rear();
    p.display();
    break;
    case 2:
    p.dele_front();
    cout<<"\n after deletion=";
    p.display();
    break;
    default:
        cout<<"\n INVALID CHOICE!!";
    }
    }
    return 0;
}
