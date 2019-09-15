#include <iostream>
using namespace std;
class node
{
public:
    int roll;
    node *next;
};
class icecream
{
    node *head,*tail;
public:
    icecream()
{
head=NULL;
tail=NULL;
}
    void create();
    void append(node *newnode);
    node *get();
    void display();
icecream uni(icecream b);
void inter(icecream b);
void only(icecream b);
void diff(icecream a,icecream b);
};

void icecream::create()     //create
{
    int ans;
    node *newnode;
    while(1)
    {
        cout<<"\n enter 1 to add new node:";
        cin>>ans;
        if(ans==1)
        {
            newnode=get();
            append(newnode);
        }
        else
            break;
    }
}

node *icecream::get()    //get
{

node *newnode;
newnode=new node;

cout<<"\n enter roll no=";
cin>>newnode->roll;
newnode->next=NULL;

return(newnode);
}
void icecream::display()     //display
{

node *temp;
temp=head;

if(temp==NULL)
{
    cout<<"\n List is empty!";
}
else

while(temp!=NULL)
{
    cout<<temp->roll;
    temp=temp->next;
}

}
void icecream::append(node *newnode)   //append
{

    if(head==NULL)
    {
    head=newnode;
    tail=newnode;
    }
    else
    {
    tail->next=newnode;
    tail=newnode;
    }
}

icecream icecream::uni(icecream b)    //union
{
    icecream c;
    int flag;
    node *temp,*curr,*newnode;
    temp=head;
    curr=b.head;

    while(temp!=NULL)
    {
        newnode=new node;
        newnode->roll=temp->roll;
        newnode->next=NULL;
        c.append(newnode);
        temp=temp->next;
    }


    temp=head;
    while(curr!=NULL)
    {
        flag=1;
        while(temp!=NULL)
        {
            if(curr->roll==temp->roll)
            {
                flag=0;
                break;
            }
            temp=temp->next;
        }
        if(flag==1)
        {
            newnode=new node;
            newnode->roll=curr->roll;
            newnode->next=NULL;
            c.append(newnode);

        }
        curr=curr->next;
    }

   return c;

}

void icecream::inter(icecream b)
{
icecream d;
node *temp,*curr,*newnode;
temp=head;
curr=b.head;
while(temp!=NULL)
{
    curr=b.head;
    while(curr!=NULL)
    {
        if(temp->roll==curr->roll)
        {
            newnode=new node;
            newnode->roll=temp->roll;
            newnode->next=NULL;
            d.append(newnode);
        }
        curr=curr->next;
    }
    temp=temp->next;
}

    d.display();

}
void icecream::only(icecream b)
{
    icecream d;
    int flag;
    node *temp,*curr,*newnode;
    temp=head;
    curr=b.head;
    while(temp!=NULL)
    {
        flag=1;
        curr=b.head;
        while(curr!=NULL)
        {
            if(temp->roll==curr->roll)
            {
                flag=0;
                break;
            }
            curr=curr->next;
        }
        if(flag==1)
        {
            newnode=new node;
            newnode->roll=temp->roll;
            newnode->next=NULL;
            d.append(newnode);
        }
        temp=temp->next;
    }

        d.display();
}
void icecream::diff(icecream a,icecream b)
{
	int flag;
	icecream c,d;
c=a.uni(b);
node *temp,*curr,*newnode;
temp=head;
curr=c.head;
while(temp!=NULL)
{
	flag=1;
	while(curr!=NULL)
	{
		if(temp->roll==curr->roll)
		{
			flag=0;
			break;
		}
		curr=curr->next;
	}
	if(flag==1)
	{
		newnode=new node;
		newnode->roll=temp->roll;
		newnode->next=NULL;
        d.append(newnode);
	}
	temp=temp->next;
}
d.display();
}
int main()
{
    int ch;
    icecream s,a,c,b;

    cout<<"\n enter set A=";
      a.create();
      cout<<"\n set A is:{";
      a.display();
      cout<<"}";
      cout<<"\n enter set B=";
      b.create();
      cout<<"\n set B is:{";
      b.display();
      cout<<"}\n";
    cout<<"\n 1.Set of students who like either vanilla or butterscotch or both";
    cout<<"\n 2.Set of students who like both vanilla and butterscotch";
    cout<<"\n 3. Set of students who like only vanilla not butterscotch";
    cout<<"\n 4. Set of students who like only butterscotch not vanilla";
    cout<<"\n 5. Number of students who like neither vanilla nor butterscotch";
    while(1)
   {
    cout<<"\n enter your choice=";
    cin>>ch;
    switch(ch)
    {
    case 1:

        cout<<"\n Set of students who like either vanilla or butterscotch or both:{";
   c= a.uni(b);
   c.display();
    cout<<"}";
    break;
    case 2:
        cout<<"\n Set of students who like both vanilla and butterscotch:{";
a.inter(b);
cout<<"}";
break;
    case 3:
        cout<<"\n  Set of students who like only vanilla not butterscotch:{";
        a.only(b);
        cout<<"}";
        break;
    case 4:
        cout<<"\n Set of students who like only butterscotch not vanilla:{";
        b.only(a);
        cout<<"}";
        break;
    case 5:
         cout<<"\n enter SE student=";
            s.create();
            cout<<"\n all SE student:{";
            s.display();
            cout<<"}";
            cout<<"\n Number of students who like neither vanilla nor butterscotch:{";
           s.diff(a,b);
           cout<<"}";
        break;
    case 6:
    	return 0;
    	break;
default:
    cout<<"\n Invalid Choice!!";
    }
  }
    return 0;
}
