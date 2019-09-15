/*
 ============================================================================
 Name        : sanket.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
int se[60],setA[10],setB[10],setC[20];
int i,j,k,m,n,p,a;
int flag=0,flag1=0,l;
printf("\n enter total no. of SE student=");
scanf("%d",&a);
printf("\n enter SE student roll no.=");
for(i=1;i<=a;i++)
{
  scanf("%d",&se[i]);
}
printf("\n All SE student roll no.{");
for(i=1;i<=a;i++)
{
 printf("%d",se[i]);
}
printf("}");
printf("\n enter total no.of student who plays cricket=");
scanf("%d",&m);
printf("\n enter total no.of student who plays Bad Minnton=");
scanf("%d",&n);
printf("\n enter student roll no. who plays cricket=");
for(i=1;i<=m;i++)
{
	scanf("%d",&setA[i]);
	}
printf("\n enter student roll no. who plays Bad Minton=");
for(i=1;i<=n;i++)
{
	scanf("%d",&setB[i]);
	}
printf("\n i. Set of students who play either cricket or badminton or both");
printf("\n ii. Set of students who play both cricket and badminton ");
printf("\n iii. Set of students who play only cricket");
printf("\n iv. Set of students who play only badminton");
printf("\n v. Set of students who play neither cricket nor badminton");
do
{
printf("\n **Enter your choice**=");
scanf("%d",&p);
switch(p)
{
case 1:k=0;
	for(i=1;i<=m;i++)
		{
			setC[k]=setA[i];
			k++;
		}
		for(i=1;i<=n;i++)
		{
		  flag=1;
		  for(j=1;j<=m;j++)
			{
			  if(setB[i]==setA[j])
				{
					flag=0;
					break;
				}
			}
			   if(flag==1)
			  {
				setC[k]=setB[i];
				k++;
			  }
		}
	printf("\nSet of students who play either cricket or badminton or both={");
	for(i=0;i<k;i++)
	{
		printf("%d",setC[i]);
	}
	printf("}");
	break;

case 2:k=0;
	for(i=1;i<=m;i++)
	{
	  for(j=1;j<=n;j++)
	  {
	   if(setA[i]==setB[j])
	    {
	     setC[k]=setA[i];
	     k++;
	    }
	  }
	}
	printf("\nSet of students who play both cricket and badminton={");
	for(i=0;i<k;i++)
	{
	 printf("%d",setC[i]);
	}
	printf("}");
	break;

case 3:k=0;
	for(i=1;i<=m;i++)
	 {
	   flag=1;
       for(j=1;j<=n;j++)
	    {
		  if(setA[i]==setB[j])
		   {
		     flag=0;
		     break;
		   }
	    }
	   if(flag==1)
	    {
	     setC[k]=setA[i];
	     k++;
	    }
	}
	printf("\n Set of students who play only cricket={");
	for(i=0;i<k;i++)
	{
	  printf("%d",setC[i]);
	}
	printf("}");
	break;

case 4:k=0;
	for(i=1;i<=n;i++)
	{
	  flag=1;
	  for(j=1;j<=m;j++)
	   {
		 if(setB[i]==setA[j])
			{
				flag=0;
				break;
			}
	   }
	  if(flag==1)
	  {
		setC[k]=setB[i];
		k++;
	  }
	}
printf("\n Set of students who play only badminton={");
		for(i=0;i<k;i++)
		{
		printf("%d",setC[i]);
		}
		printf("}");
		break;

case 5:k=0;
	for(i=1;i<=m;i++)
			{
				setC[k]=setA[i];
				k++;
			}
			for(i=1;i<=n;i++)
			{
			  flag=1;
			  for(j=1;j<=m;j++)
				{
				  if(setB[i]==setA[j])
					{
						flag=0;
						break;
					}
				}
				   if(flag==1)
				  {
					setC[k]=setB[i];
					k++;
				  }
			 }

			printf("\nSet of students who play neither cricket nor badminton={");
			for(i=1;i<=a;i++)
			{
				flag1=1;
				for(j=0;j<k;j++)
				{
					if(se[i]==setC[j])
					{
						flag1=0;
						break;
					}
				}
			if(flag1==1)
			{
				printf("%d",se[i]);
			}

		}
			printf("}");
break;
default:printf("\n INVALID CHOICE=");
break;
}
printf("\n **ENTER 1 TO CONTINUE**=");
scanf("%d",&l);
}
while(l==1);
return 0;
}
