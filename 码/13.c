#include<stdio.h>
int max(int a,int b)
{
  return a>b?a:b;
}
int min (int a,int b)
{
  return a>b?b:a;
}
int add(int a,int b)
{
  return a+b;
}
int process(int a,int b,int(*p)(int , int))
{
  return p(a,b);
}
int main()
{
  int a=3,b=5;
  int(*p)(int ,int);
  p=max;
  printf("%d",process(a,b,p));
  p=min;
  printf("%d",process(a,b,p));
  p=add;
  printf("%d",process(a,b,p));
}
