#include<stdio.h>
void inv(int *,int);
void inv2(int *,int);
void sort2(int *,int);
int main()
{
  int i,a[10]={5,10,7,6,5,4,3,2,1,0};
  sort2(a,10);
  for(i=0;i<10;i++) printf("%d ",*(a+i));
}
void inv(int x[],int n)
{
  int temp,*i,*j;
  i=x,j=x+n-1;
  for(;i<j;i++,j--)
  {
    temp=*i;*i=*j;*j=temp;
  }
}
void inv2(int x[],int n)
{
  int *i,*j,temp;
  i=x;j=x+n-1;
  while(i<j)
  {
    temp=*i;
    *i=*j;
    *j=temp;
    i++;j--;
  }
}
void sort2(int x[],int n)
{
  int *i,*j,*temp;
  for(i=x;i<x+n-1;i++)
  {
    temp=i;
    for(j=i+1;j<x+n-1;j++)
      if(*j>*temp)  temp=j;
    int temp2=*i;
    *i=*temp;
    *temp=temp2;
  }
}
