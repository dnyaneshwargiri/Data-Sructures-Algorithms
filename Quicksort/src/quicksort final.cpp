#include <iostream>
using namespace std;
class quicksort
{
	public:


    void srt(float k[20],int lb,int ub)
  {
  int i,j,flag=0;
  float key,temp;
 if (lb<ub)
    {
     i=lb;
     j=ub+1;
     key=k[i];
     while(flag!=1)
      {
       i++;
       while(k[i]<=key)
        {
         i++;
        }
       j--;
       while(k[j]>=key)
        {
         j--;
        }
       if (i<j)
          {
           temp=k[i];
           k[i]=k[j];
           k[j]=temp;
          }
       else
          {
           flag=1;
           temp=k[lb];
           k[lb]=k[j];
           k[j]=temp;
          }
      }
     srt(k,lb,j-1);
     srt(k,j+1,ub);
    }
}

};
int main()
{
  quicksort q;
  float a[10];
 int count=0,n, z=1,i;
 cout<<"Enter no of elements to be sorted : \n";
 cin>>i;
 cout<<"Enter no in unsorted order : \n";
 for (n=0;n<i;n++)
     {
      cout<<"value no : "<<(n+1)<<"\t";
      cin>>a[n];
      count++;
     }
 n=0;

q.srt(a,n,count-1);

 cout<<"\t\tThe Sorted order is : \n";
 for (n=0;n<i;n++)
     {
      cout<<"\t\tposition : "<<(n+1)<<"\t"<<a[n]<<"\n";
     }


     
return 0;
}

