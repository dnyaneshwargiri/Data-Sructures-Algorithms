#include <iostream>
using namespace std;
class sort
{
public:
    float arr[20],newarr[20],temp;
    int i,j,n,m,k,y;
    void getarr()
    {
        cout<<"\n enter no.of students =";
        cin>>n;
        cout<<"\n enter marks=";
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        for(i=1;i<=n;i++)
        {
        cout<<arr[i]<<"\t";
        }
    }

    void top5()
    {
    	if(n>=5)
    	{
        for(i=n;i>n-5;i--)
        {
            cout<<arr[i]<<"\t";
        }
    	}
    	else
    		cout<<"\n records are less than 5!!!!";
    }
    void insertsort()
    {
int i,k,y;
for(k=1;k<=n;k++)
{
    y=arr[k];
    for(i=k-1;i>=0&&y<arr[i];i--)
    {
        arr[i+1]=arr[i];
        arr[i]=y;
    }
}
    }

    void shell()
    {
        cout<<"\n enter array size=";
        cin>>n;
        cout<<"\n enter elements=";
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        cout<<"\n Before sorting=";
        for(i=1;i<=n;i++)
        {
            cout<<arr[i]<<"\t";
        }
        k=n/2;
        while(k>=1)
        {
            for(j=1;j<=n;j++)
            {
                if((j+k)<=n)
                {
                    if(arr[j]>arr[j+k])
                    {
                        temp=arr[j];
                        arr[j]=arr[j+k];
                        arr[j+k]=temp;
                    }
                }
                else
                {
                    break;
                }
            }

            k=k-2;
        }
        for(m=1;m<n;m++)
        {
            y=arr[m];
            for(i=m-1;i>=0&& y<arr[i];i--)
            {
                arr[i+1]=arr[i];
                arr[i]=y;
            }
        }
    }
};
int main()
{
    sort p;
    int ch;
    while(1)
    {
    cout<<"\n 1.Insert sort";
    cout<<"\n 2.Shell sort";
    cout<<"\n enter your choice=";
    cin>>ch;
    switch(ch)
    {
    case 1:

p.getarr();
cout<<"\n  marks are=\t";
p.display();
cout<<"\n";
p.insertsort();
cout<<"\n sorted marks are=\t";
p.display();
cout<<"\n";
cout<<"\n top 5 are=\t";
p.top5();
break;
    case 2:
p.shell();
cout<<"\n sorted marks are=\t";
p.display();
cout<<"\n";
cout<<"\n top 5 are=\t";
p.top5();
break;
default:
    cout<<"\n INVALID CHOICE!!";
    }
    }
    return 0;
}
