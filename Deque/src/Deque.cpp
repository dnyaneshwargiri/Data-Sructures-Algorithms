//============================================================================
// Name        : queue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class que
{
public:
	int z=1;
char queue[10];
int i,front,rear,x;
que()
{
front=rear=0;
}
void insert()
{   if(rear!=10)
	{
	cout<<"\nEnter element";
	cin>>queue[rear];
	rear++;
	}
	else cout<<"\nQueue is full.";
}
void del()
{
 if(rear!=front)
 {
    cout<<"\nDeleted element is:"<<queue[front]<<"\nAfter deletion\n";
    front++;
 }
 else cout<<"\nQueue is empty.";
}
void disp()
{	cout<<"\n\tfront-> rear\n";
for(i=front;i<=rear;i++)
{cout<<queue[i]<<"\t";
}
}
void inserfromfront()
{
if(front==0)
{cout<<"\nEnter element";

cin>>queue[front];

}
else
if(front!=9)

{
	queue[front+z+1]=queue[front+z];
	cout<<"\nEnter element";
      cin>>queue[z-1];
z++;

}

else cout<<"Overlow";
}

void delfromrear()
{
   if(rear!=front)
	{
	    cout<<"\nDeleted element is:"<<queue[rear]<<"\nAfter deletion\n";
	    rear--;
	}

	 else cout<<"\nQueue is empty.";
	}
};


int main()
{
int ch;
que q;
while (1)
{
cout<<"\n1.Insert element.\n2.Delete element\nEnter your choice.";
cin>>ch;
switch(ch)
{
case 1:
	q.inserfromfront();
	q.disp();
	break;
case 2:
	q.delfromrear();
	q.disp();
	break;
default :cout<<"\nInvalid choice";
}
}



/*while (1)
{
cout<<"\n1.Insert element.\n2.Delete element\nEnter your choice.";
cin>>ch;
switch(ch)
{
case 1:
	q.insert();
	q.disp();
	break;
case 2:
	q.del();
	q.disp();
	break;
default :cout<<"\nInvalid choice";
}
}*/
	return 0;
}
