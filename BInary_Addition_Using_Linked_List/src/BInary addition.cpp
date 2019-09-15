#include <iostream>
using namespace std;
int c=0;
class node
{
public:
    int bin;
    node *next,*prev;
};
class binary
{
    node *head,*tail;
public:
    binary()
{
head=NULL;
tail=NULL;

}
    void create();
    void append(node *newnode);
    node *get();
    void display();
    void compli();
    void compli2();
    void add(binary q);
};

void binary::create()                    //create
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

node *binary::get()                     //get
{

node *newnode;
newnode=new node;

cout<<"enter Binary no. :";
cin>>newnode->bin;
newnode->next=NULL;

return(newnode);
}
void binary::display()                //display
{
    int c=1;
node *temp;
temp=head;
cout<<"\n";
if(temp==NULL)
{
    cout<<"\n List is empty!";
}
else

while(temp!=NULL)
{
    cout<<c<<")\t";
    cout<<temp->bin<<"\t";
    temp=temp->next;
    c++;
}

}
void binary::append(node *newnode)                 //append
{

    if(head==NULL)
    {
    head=newnode;
    tail=newnode;
    newnode->prev=NULL;
    }
    else
    {
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    }
}
void binary::compli()
{
    node *temp;
    temp=head;
while(temp!=NULL)
  {
    if(temp->bin==1)
        {
           temp->bin=0;
        }
    else if(temp->bin==0)
        {
        temp->bin=1;
        }
    if(temp->next!=NULL)
    {
    temp=temp->next;
    }
    else
    	break;
  }
}
void binary::compli2()
{
    int carry=1;
    node *curr;
   curr=tail;
   while(curr!=NULL)
   {
     if((curr->bin==1)&&(carry==1))
      {
        curr->bin=curr->bin+carry;
        if(curr->bin==2)
          {
            curr->bin=0;

          }
        if(curr->prev!=NULL)
        {
        	curr=curr->prev;
        }
        else break;
      }
   else if((curr->bin==0)&&(carry==1))
     {
       curr->bin=curr->bin+carry;
       carry=0;
       if(curr->prev!=NULL)
               {
               	curr=curr->prev;
               }
               else break;

     }
   else
	   if(curr->prev!=NULL)
	                  {
	                  	curr=curr->prev;
	                  }
	                  else break;


  }

   if(carry==1)
   {  node *newnode;
        newnode=new node;
        newnode->bin=1;
       curr->bin=0;
       head=newnode;
      newnode->next=curr;
       curr->prev=newnode;
      newnode->prev=NULL;
   }

}
void binary::add(binary q)
{
    int carry=0,count=0,count1=0;
node *temp,*curr,*hed=head,*hed1=q.head;
temp=tail;
curr=q.tail;
while(hed!=NULL)
{
	count++;
	hed=hed->next;
}
while(hed1!=NULL)
{
	count1++;
	hed1=hed1->next;
}
if(count==count1)
{
while(temp!=NULL && curr!=NULL)
{
    if((temp->bin==0 && curr->bin==0) && (carry==0 ||carry==1))
    {
       temp->bin=(temp->bin)+(curr->bin)+carry;
       carry=0;
            if(temp->prev!=NULL && curr->prev!=NULL)
            {   temp=temp->prev;
             curr=curr->prev; }
            else break;

    }
    else if((temp->bin==0 && curr->bin==1) && (carry==0||carry==1))
    {
         temp->bin=(temp->bin)+(curr->bin)+carry;
         if(temp->bin==2)
         {
             temp->bin=0;
             carry=1;
         }
         if(temp->prev!=NULL && curr->prev!=NULL)
                             {   temp=temp->prev;
                              curr=curr->prev; }
         else break;
    }
    else if((temp->bin==1&& curr->bin==0) && (carry==0||carry==1))
    {
         temp->bin=(temp->bin)+(curr->bin)+carry;
         if(temp->bin==2)
           {
              temp->bin=0;
              carry=1;
              }
         if(temp->prev!=NULL && curr->prev!=NULL)
                             {   temp=temp->prev;
                              curr=curr->prev; }
         else break;
    }
    else if((temp->bin==1 && curr->bin==1) && (carry==0||carry==1))
    {
         temp->bin=(temp->bin)+(curr->bin)+carry;
         if(temp->bin==2)
         {
             temp->bin=0;
             carry=1;
         }
         else if(temp->bin==3)
         {
             temp->bin=1;
             carry=1;
         }

         if(temp->prev!=NULL && curr->prev!=NULL)
                    {   temp=temp->prev;
                     curr=curr->prev; }
         else break;
    }
}

   if(carry==1)
      {  node *newnode;
           newnode=new node;
           newnode->bin=1;
          head=newnode;
         newnode->next=temp;
         temp->prev=newnode;
         newnode->prev=NULL;
      }
}
else
	{
	cout<<"\n*************************************";
	c=1;
	cout<<"\n manage the lengths of two lists!!!!";
	cout<<"\n*************************************";
	}
}

int main()
{
	int ch;
    binary p,t,q;
    cout<<"\n 1.Compute 1‘s and 2‘s complement";
    cout<<"\n 2.Add two binary numbers";
    while(1)
   {
    	cout<<"\n enter your choice=";
    cin>>ch;
    switch(ch)
    {
    case 1:
    p.create();
    cout<<"The  binary number is:";
    p.display();
    p.compli();
   cout<<"\n1's compliment is:";
    p.display();
    p.compli2();
    cout<<"\n 2's compliment is:";
    p.display();
    break;
    case 2:
   t.create();
    cout<<"The binary number is=";
    t.display();
    cout<<"\n enter second number=";
   q.create();
   cout<<"\n second list is =";
   q.display();
   cout<<"\n____________________________________________________________";
   cout<<"\n\n\n";
   t.display();
   cout<<"\n+\n";
    q.display();
    cout<<"\n____________________________________________________________";
    t.add(q);
    if(c!=1)
    {
    cout<<"\n addition=\n";
    t.display();
    }
break;
default:
	cout<<"\n Invalid Choice!!";
    }
  }
    return 0;
}
