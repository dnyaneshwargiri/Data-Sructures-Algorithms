/*
 ============================================================================
 Name        : magic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i,j,size,matrix[10][10];
int sum=0,sum1,sum2,flag;
printf("\n enter size of matrix=");
scanf("%d",&size);
printf("\n ENter values in row wise only=\n");
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
          scanf("%d",&matrix[i][j]);
    }
}
printf("Your Matrix is:-");
for(i=0;i<size;i++)
{
    printf("\n");
  for(j=0;j<size;j++)
  {
    printf("%d\t",matrix[i][j]);
  }
}
for(i=0;i<size;i++) //diagonal
{
sum+=matrix[i][i];
}
printf("\n\nsum of diagonal=%d",sum);

for(i=0;i<size;i++) //row & col
{
    sum1=0;
        sum2=0;
    for(j=0;j<size;j++)
         {
         sum1+=matrix[i][j];
                sum2+=matrix[j][i];
         }
    if(sum==sum1&&sum==sum2)
        flag=1;
    else
        flag=0;
printf("\nsum row (%d)=%d \n sum col(%d)=%d",i,sum1,i,sum2);
}

if(flag==1)
{
    printf("\n 'Its magic matrix'");
}
else
{
    printf("\n 'Its not magic matrix'");
}
printf("\n");
return 0;
}
