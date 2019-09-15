#include<iostream>
using namespace std;
class sort
{
    public:
    float arr[20];
    int i,j,size;
    void getarr()
    {
        cout<<"\n enter size=";
        cin>>size;
        cout<<"\n enter elements=";
        for(i=1;i<=size;i++)
          {
            cin>>arr[i];
          }
    }
    void bubble()
 {
    float temp;
    for(i=1;i<=size;++i)
    {
        for(j=1;j<=(size-i);j++)
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
 }

    void selectsort()
    {
    	float temp;
        for(i=1;i<=size;i++)
        {
            for(j=i;j<=size;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

    void top5()
    {
    	if(size>=5)
    	{
    	cout<<"\n Top 5 records are=";
        for(i=size;i>size-5;i--)
        {
            cout<<arr[i]<<"\t";
        }
    	}
    	else
    		cout<<"\n records are less than 5!!!!";
    }

 void display()
 {
     for(i=1;i<=size;i++)
     {
         cout<<arr[i]<<"\t";
    }
}
    };
    int main()
    {
    	int ch;
        sort p;
        while(1)
        {
        cout<<"\n1.Bubble sort";
        cout<<"\n2.Selection sort";
        cout<<"\n Enter choice=";
        cin>>ch;
        switch(ch)
        {
        case 1:
        p.getarr();
        cout<<"\n Marks are=";
        p.display();
        cout<<"\n";
        p.bubble();
        cout<<"\n After sorting=";
        p.display();
        cout<<"\n";
        p.top5();
        break;
        case 2:
            p.getarr();
            cout<<"\n Marks are=";
            p.display();
            cout<<"\n";
            p.selectsort();
            cout<<"\n After sorting=";
            p.display();
            cout<<"\n";
            p.top5();
        }
        }
        return 0;
    }
