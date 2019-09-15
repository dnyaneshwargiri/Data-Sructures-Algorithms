#include <iostream>
using namespace std;

class node
{
public:
     int prn;
    char name[10];
    node *link;

};
class pinnacle
{
     node *president,*secretary;
public:

     pinnacle()
{
president=NULL;
}
     void create();
     void getps();
     void append(node *newnode);
     node *get();
     void print();
     void delet(int pos);
     void add(node *newnode);
     void insert(node *newnode,int loc);
     void concate(pinnacle r);
     void countdisplay();

     void recrevers(node  *temp);
     void rtraverse()
     {
         recrevers(president);
     }
};
void pinnacle::countdisplay()                 //count display
{
    int c=0;
    node *temp=president;
       while(temp!=NULL)
        {
            temp=temp->link;
            c++;
        }
       cout<<"\n total members are="<<c;
}
void pinnacle::recrevers(node *temp)               //recuresive
{
    if(temp==NULL)
        return;
    recrevers(temp->link);
    cout<<temp->prn<<temp->name<<"\t";
}
void pinnacle::getps()                 //getpresi
{
     node *newnode;
     cout<<"\n enter p";
        newnode=get();
        append(newnode);
        cout<<"\n enter s";
        newnode=get();
        append(newnode);
}
void pinnacle::create()               //create
{
    int ans;
    node *newnode;

    while(1)
    {
        cout<<"\n enter 1 to create new node=";
        cin>>ans;
        if(ans==1)
        {

            newnode=get();
           add(newnode);

        }
        else
            break;
    }
}
node *pinnacle::get()                      //get
{
node *newnode;
newnode=new node;
cout<<"\n enter prn=";
cin>>newnode->prn;
cout<<"\n enter name=";
cin>>newnode->name;
newnode->link=NULL;
return (newnode);
}
void pinnacle::append(node *newnode)                  //append
{
if(president==NULL)
{
president=newnode;
secretary=newnode;
}
else
{
secretary->link=newnode;
secretary=newnode;
}
}
void pinnacle::add(node *newnode)                   //add
{ node *temp;
temp=president;
    while(temp->link->link!=NULL)
           {
               temp=temp->link;
           }
           newnode->link=temp->link;
           temp->link=newnode;
    }
void pinnacle::print()                      //display
{int c=1;
node *temp=president;
if(temp==NULL)
{
cout<<"\n linked list is empty";
}
else

    while(temp!=NULL)
    {
         cout<<c<<")\t";
        cout<<temp->prn<<"\t"<<temp->name<<"\t\t";
        temp=temp->link;
        c++;
    }


}
void pinnacle::delet(int pos)                   //delete
{
    int count=1,flag=1;
    node *curr,*temp;
    temp=president;
    if(pos==1)
    {
        president=president->link;
        delete temp;
    }
    else
    {
        while(count!=pos-1)
        {
            temp=temp->link;
            if(temp==NULL)
            {
                flag=0;
                break;
            }
            count++;
        }
        if(flag==1)
        {
            curr=temp->link;
            temp->link=curr->link;
            delete curr;
        }
        else
            cout<<"position not found";
    }
}
void pinnacle::insert(node *newnode,int loc)          //insert
{
node *temp;
temp=president;
int count1=1,flag1=1;
if(loc==1)
{
newnode->link=temp;
president=newnode;
}
else
{
 while(count1!=loc-1)
 {
    temp=temp->link;
    if(temp==NULL)
    {
        flag1=0;
        break;
    }
    count1++;
 }
 if(flag1==1)
 {
     newnode->link=temp->link;
     temp->link=newnode;
 }
 else
     cout<<"location is not found";
}
}

void pinnacle::concate(pinnacle r)             //concate
{
secretary->link=r.president;
//r.secretary=NULL;
}

int main()
{
    int pos,loc,ch;
    pinnacle p,r;
node *q;
p.getps();
p.create();
p.print();

cout<<"\n\n1.Add and delete the members as well as president or even secretary.";
cout<<"\n 2. Compute total number of members of club";
cout<<"\n 3. Display members";
cout<<"\n 4.Display list in reverse order using recursion";
cout<<"\n 5.Concatenate two lists.";
while(1)
{
cout<<"\n\n enter your choice=";
cin>>ch;
switch(ch)
{
case 1:cout<<"\n enter student position to be deleted=";                 //delete
cin>>pos;
p.delet(pos);
p.print();

cout<<"\n enter location to be inserted=";            //insert
    cin>>loc;
    q=p.get();
    p.insert(q,loc);
p.print();
break;
case 2:
   p.countdisplay();
    break;
case 3:
    p.print();
        break;
case 4:
cout<<"\n reverse list using recursion is=\n";
p.rtraverse();
break;
case 5:
cout<<"\n enter second list=";
   r.getps();                //concate
    r.create();
    r.print();
    cout<<"\n\n concatenated lists is=\n";
   p.concate(r);
   p.print();
   break;
default:
    cout<<"\n invalid choice!!";
}
}
return 0;
}
