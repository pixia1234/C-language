#include <stdio.h>

int main()
{
  int a[10]={0,1,2,3,4,5,6,7,8,9};
  int *q=a;
  int *p=&a[0];
  q++;
  p=q+3;
  printf("%d,%d\n",*q,*p);
  printf("%d\n",*(p-1));
  printf("%d\n",p-q);
  printf("%d\n",q>p);
  printf("%d\n",q<p );
}
