//============================================================================
// Name        : stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;
class stack
{
public:
char stac[50],top,max;
    stack()
    {
        max=50;
        top=-1;
    }
    void push(char a);
    char pop();
    int isempty();
    int isfull();
    void display();

   void pop(char p);
};

int stack::isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int stack::isfull()
{
    if(top==max-1)
        return 1;
    else
        return 0;
}
void stack::push(char a)   //push
{
    if(!isfull())
    {
    	top++;
        stac[top]=a;
    }
}

void stack::pop(char t)  //pop
 {
   if(t=='}')
   {
     if(stac[top]=='{')
     top--;
   }
   else if(t==')')
   {
    if(stac[top]=='(')
    top=top-1;
   }
   else if(t==']')
   {
    if(stac[top]=='[')
    top=top-1;
   }
 }

void stack::display()  //display
{
   int i;
   if(top==-1)
     cout<<"\n well parenthesized";
   else
   {
     cout<<"\n not parenthesized";
     for(i=0;i<=top;i++)
     {
       cout<<"\t"<<stac[i];
     }
   }
}

int main()
{
    char exp[20],x,t;
    int ele,i,k;
   stack p,r;
   cout<<"\n enter expression=";
   cin>>exp;
   for(k=0;exp[k]!='\0';k++);
   cout<<"\n given expression is="<<exp;
   for(i=0;i<k;i++)
 {
   if((exp[i]=='{')||(exp[i]=='(')||(exp[i]=='['))
   {
   x=exp[i];
   p.push(x);
   }
   else if((exp[i]=='}')||(exp[i]==')')||(exp[i]==']'))
    {
	 t=exp[i];
	 p.pop(t);
     }
 }
p.display();
    return 0;
}
