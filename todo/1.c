#include<stdio.h>
#include<stdlib.h>
void check(int *)
{
  
}
int main()
{
  int *p1,i;
  p1=(int *) malloc(5*sizeof(int));
  for(i=1;i<5;i++) scanf("%d",p1+i);
  check(p1);
  return 0;
}
