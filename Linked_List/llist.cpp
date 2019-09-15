#include<iostream>
using namespace std;
class node
{
    public:
	int prn ;
	char name[20];
	node *link;

};
class pnc
{
public:
node *prs,*scr;
public:
pnc()
{
	prs=NULL;
}
void add();
node *getnode();
void append(node *newnode);
void append1(node *newnode);
void *cnc(pnc *ps,pnc *ps1);
void disp();
void add1();
node *getnode1();
void append2(node *newnode);
void append11(node *newnode);
void disp1();


};

void pnc::add()
{char ans;
node *newnode,temp;
cout<<"\nenter prs";
newnode =getnode();
append(newnode);
cout<<"\nenter scr";
newnode =getnode();
append(newnode);
while (1)
{
cout<<"\nDo u want to add any node y/n";
cin>>ans;
if (ans=='n')
break;
newnode=getnode();
append1(newnode);

}



}
void pnc::append(node *newnode)
{if (prs==NULL)
{
	prs=newnode;
    scr=newnode;
}
else {
	 scr->link=newnode;
     scr=newnode;
     }
	}
node *pnc::getnode()
{
	node*newnode;
newnode=new node;
cout<<"\nEnter the name";
cin>>newnode->name;
cout<<"\nEnter the prn";
cin>>newnode->prn;
newnode->link=NULL;
return(newnode);
}
void pnc::disp()

{
	node *temp=prs;
if(temp==NULL)
{
	cout<<"\nEmpty list.";}
else{
while (temp!=NULL)
{
	cout<<temp->name;
	cout<<"\t";
cout<<temp->prn;cout<<"\n";
temp=temp->link;}
cout<<endl;
}}
void pnc::append1(node *newnode)
{
	node *temp;
	temp=prs;
while(temp->link->link!=NULL)
{temp=temp->link;}
newnode->link=temp->link;
temp->link=newnode;
}//

void pnc::add1()
{char ans;
node *newnode,temp;
cout<<"\nenter prs";
newnode =getnode();
append(newnode);
cout<<"\nenter scr";
newnode =getnode();
append(newnode);
while (1)
{
cout<<"\nDo u want to add any node y/n";
cin>>ans;
if (ans=='n')
break;
newnode=getnode();
append1(newnode);

}



}
void pnc::append2(node *newnode)
{if (prs==NULL)
{
	prs=newnode;
    scr=newnode;
}
else {
	 scr->link=newnode;
     scr=newnode;
     }
	}
node *pnc::getnode1()
{
	node*newnode;
newnode=new node;
cout<<"\nEnter the name";
cin>>newnode->name;
cout<<"\nEnter the prn";
cin>>newnode->prn;
newnode->link=NULL;
return(newnode);
}
void pnc::disp1()

{
	node *temp=prs;
if(temp==NULL)
{
	cout<<"\nEmpty list.";}
else{
while (temp!=NULL)
{
	cout<<temp->name;
	cout<<"\t";
cout<<temp->prn;cout<<"\n";
temp=temp->link;}
cout<<endl;
}}
void pnc::append11(node *newnode)
{
	node *temp;
	temp=prs;
while(temp->link->link!=NULL)
{temp=temp->link;}
newnode->link=temp->link;
temp->link=newnode;
}



void *pnc::cnc(pnc *prs,pnc *prs1)
{
	node *p;

	if (prs==NULL)
	return(prs1);
	if (prs1==NULL)
	return(prs);
	p=prs;
	while(p->link!=NULL)
	p=p->link;
	p->link=prs1;
	return(prs);

	}
int main()
{

	pnc p,r,t;
	node *q,*a,*b;
	p.add();
	p.disp();
	r.add1();
	r.disp1();
	return 0;}
