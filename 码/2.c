#include<stdio.h>
void sort(int x[],int n)
{
  int t,i,j,min;
for(i=0;i<n-1;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    if(x[min]>x[j]) min=j;
    t=x[min];
    x[min]=x[i];
    x[i]=t;
  }
}
int  main()
{
  int a[5],i,*p;
  p=a;
  for(i=0;i<5;i++) scanf("%d",p++);
  sort(a,5);
  p=a;
  for(i=0;i<5;i++) printf("%d ",*p++);
  return 0;
}
