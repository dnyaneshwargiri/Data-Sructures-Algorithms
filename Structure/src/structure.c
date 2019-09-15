/*
 ============================================================================
 Name        : structure.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
            struct student
            {
                int rollno;
                float marks;
                char remark;

            }p[20];
            int main()
            {

                int i,n,sum=0,c=0,c1=0,l,roll,roll1,m=0;
                int j,max1;
                float avg,maj,max,min;
                printf("Enter the number of student:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                  {
                    printf("\nEnter roll number of student:");
                    scanf("%d",&p[i].rollno);
                    printf("\nEnter the remark:");
                    scanf("%s",&p[i].remark);
                    if(p[i].remark=='p'||p[i].remark=='P')
                     {
                      printf("\nEnter the marks of the student:");
                      scanf("%f",&p[i].marks);
                     }
                  }
               printf("\n 1.Enter 1 to Average marks of class");
               printf("\n 2.Enter 2 to max & min. marks of class");
               printf("\n 3.Enter 3 to total Absent students of class");
               printf("\n 4.Enter 4 to majority marks");
               printf("\n 5. exit");
               while(1)
            {
               printf("\n Enter your choice=");
               scanf("%d",&l);
            switch(l)
             {
            case 1://AVERAGE
                for(i=0;i<n;i++)
                {
                   if(p[i].remark=='P'||p[i].remark=='p')
                      {
                        sum+=p[i].marks;
                        c++;
                      }
                }
                avg=sum/c;
                printf("\nThe average score of class is:%f",avg);
                printf("\n");
                break;

            case 2:
                  //MAXIMUM
            	max=0;
                 for(i=0;i<n;i++)
                 {
                    if(p[i].remark=='P'||p[i].remark=='p')
                    {
                       if(max<p[i].marks)
                       {
                       max=p[i].marks;
                       roll=p[i].rollno;
                       }
                    }
                 }
                 printf("\nThe highest marks are:%f",max);
                 printf("\nThe roll number of highest scores is:%d",roll);
                  printf("\n");

                 //MINIMUM
               min=p[0].marks;
               roll1=p[0].rollno;
                 for(i=0;i<n;i++)
                  {
                     if(p[i].remark=='P'||p[i].remark=='p')
                      {
                        if(min>p[i].marks)
                         {
                           min=p[i].marks;
                           roll1=p[i].rollno;
                         }
                      }
                   }
                 printf("\nThe minimum marks are:%f",min);
                 printf("\nThe roll number of lowest scorer is:%d",roll1);
                 printf("\n");
                 break;
            case 3://ABSENT
                  for(i=0;i<n;i++)
                   {
                     if(p[i].remark=='a'||p[i].remark=='A')
                      {
                        c1++;
                      }
                   }
                   printf("\n Total no of Absent Students=%d",c1);
                   printf("\n");
                   break;
            case 4://majority marks

                max1=0;
                for(i=0;i<n;i++)
                {
                    m=0;
                    for(j=0;j<n;j++)
                    {
                       if(p[i].marks==p[j].marks)
                       {
                          m++;
                       }
                       if(m>max1)
                        {
                          max1=m;
                          maj=p[i].marks;
                        }
                    }
                }
            printf("majority marks are='%f'by'%d'students",maj,max1);
            printf("\n");
                   break;
            case 5:
            	exit(0);

            default:
                    printf("\n INVALID CHOICE!!");
                    break;
             }


            }
             return 0;
            }
