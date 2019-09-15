//============================================================================
// Name        : list.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include <cstdlib>   //For using rand function.
using namespace std;
void display(list<int> &lst)
{
	list<int> :: iterator p;
	for(p=lst.begin();p!=lst.end();++p)
	{
		cout<<*p<<",";
		cout<<"\n\n";
	}
}
int main()
{
list<int> list1;           //Empty list of zero length.
list<int>list2(5);         //Empty list of size 5.


for(int i=0;i<3;i++)

list1.push_back(rand()/100);
list<int>::iterator p;

for(p=list2.begin();p!=list2.end();++p)
	*p=rand()/100;
cout<<"List 1:\n";
display(list1);
cout<<"List 2:\n";
display(list2);

//Add to elements at the end of the list.
list1.push_front(100);
list1.push_back(200);

//Remove an element from front of list.
list2.pop_front();
cout<<"Now list1:\n";
display(list1);
cout<<"Now list2:\n";
display(list2);

//Merging two lists(Unsorted).
list1.merge(list2);
cout<<"Merged unsorted lists:\n";
display(list1);

//Sorting and merging.
list1.sort();
list2.sort();
list1.merge(list2);
cout<<"Merged sorted lists:\n";
display(list1);


//Reversing a list.
list1.reverse();
cout<<"Reversed merged list:\n ";
display(list1);

return 0;
}
