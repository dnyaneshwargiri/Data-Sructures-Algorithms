#include <iostream>
using namespace std;

class strings
{
private:
    char str1[20], str2[20];
public:
    int len();
    string copy();
    string concat();
    void equal();
    string reverse();
    void substr();
};

int strings::len()
{
    int i;
    cout<<"Enter the string:";
    cin>>str1;
    for (i=0;str1[i]!='\0';i++);
    return i;
}

string strings::copy()
{
    int i;
    cout<<"Enter the string:";
    cin>>str1;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    return str2;
}

string strings::concat()
{
    int j, i;
    cout<<"Enter string 1:";
    cin>>str1;
    cout<<"Enter string 2:";
    cin>>str2;
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++,i++)
    {
        str1[i]=str2[j];
    }
        str2[j]='\0';
        str1[i]='\0';
    return str1;
}

void strings::equal()
{
    int i,j, flag=0;
    cout<<"Enter the 1st string:";
    cin>>str1;
    cout<<"Enter the 2nd string:";
    cin>>str2;
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++);
    if(i==j)
    {
        for(i=0,j=0;str1[i]!='\0';i++,j++)
        {
            if(str1[i]==str2[j])
            {
                flag=1;
            }
            else
            cout<<"Strings not equal";
            break;

        }
    }
    else
        cout<<"Strings not equal";
    if(flag==1)
    {
        cout<<"The strings are equal";
    }
}

string strings::reverse()
{
    int i,j,n, flag=0;
    cout<<"Enter the string to be reversed:";
    cin>>str1;
    for(i=0;str1[i]!='\0';i++);
    n=i;
    i--;
    for(j=0;j<n;j++,i--)
    {
        str2[j]=str1[i];

    }
    str2[j]='\0';

    for(i=0,j=0;str1[i]!='\0';i++,j++)
            {
                if(str1[i]==str2[j])
                {
                    flag=1;
                }
                else
                cout<<"Strings not palindrome\n";
                break;

            }
    if(flag==1)
        {
            cout<<"The strings are palindrome\n";
        }

    return str2;

    /*for(i=0;str1[i]!='\0';i++)
    {
        n++;
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<str1[i];
    }*/
}

void strings::substr()
{
    int len, len2, i, j, k, flag=0;
    cout<<"Enter  the main string: ";
    cin>>str1;
    for(len=0;str1[len]!='\0';len++);
    cout<<"Enter the sub string: ";
    cin>>str2;
    for(len2=0;str2[len2]!='\0';len2++);
    for(i=0;i<len;i++)
    {
        k=i;
        for(j=0;j<len2;j++)
        {
            if(str1[k]==str2[j])
            {
                if(j==len2-1)
                {
                    cout<<"The entered string is a sub string";
                    flag=1;
                    break;
                }
                k++;
            }
            else
                break;
        }
    }
    if(flag==0)
    {
        cout<<"The string is not a substring";
    }
}
int main()
{
    int d,w;
    cout<<"\n 1.Copy string";
    cout<<"\n 2.Concatenate strings";
    cout<<"\n 3.Check Sub-string";
    cout<<"n 4.Equal";
    cout<<"\n 5.Reverse";
    cout<<"\n 6.Length of string";
    cout<<"\n 7.exit";
    while(1)
    {
        cout<<"\n\n Enter your choice: ";
    cin>>d;

    switch(d)
    {
    case 1:
    {
        strings s1;
        cout<<"The copy of the string is:"<<s1.copy();
        break;
    }
    case 2:
    {
        strings s1;
        cout<<"The concatenation of strings is:"<<s1.concat();
        break;
    }
    case 3:
        {
            strings s1;
            s1.substr();
            break;
        }
    case 4:
    {
        strings s1;
        s1.equal();
        break;
    }
    case 5:
    {
        strings s1;
        cout<<"The reversed string is:"<<s1.reverse();
        break;
    }
    case 6:
         {
            strings s1;
            cout<<"The length of string is:"<<s1.len();
            break;
         }
         break;
    case 7:
    	return 0;
    	break;
    default:
        cout<<"Invalid choice!";
    }

    }
    return 0;
}
