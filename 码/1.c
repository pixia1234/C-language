#include<stdio.h>
int c(int a[],int b[]);
int main()
{
  int a[8]={1,2,3,4,5,6,7,8};
  int b[8]={8,7,6,5,4,3,2,1};
  int i;
  c(a,b);
  for(i=0;i<8;i++)
   printf("%d\n",a[i]);
   return 0;
}
int c(int a[],int b[])
{
  int i;
  for(i=0;i<8;i++)
  {
    a[i]*=b[i];
  }
}
