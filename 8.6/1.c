//1）输入2个升序数列，将其保存在2个数组中，利用指针合并这两个数列并输出。
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b,num1[1000],num2[1000],num3[2000],i;
  scanf("%d%d",&a,&b);
  for(i=0;i<a;i++) scanf("%d",&num1[i]);
  for(i=0;i<b;i++) scanf("%d",&num2[i]);
  int *p,*q,*out;
  p=num1;
  q=num2;
  out=num3;
  while(p<num1+a&&q<num2+b)
  {
    if(*p<*q)
    {
      *out=*p;
      p++;
    }
    else
    {
      *out=*q;
      q++;
    }
    out++;
  }
  if(p==num1+a)
  {
    while(q<num2+b)
    {
      *out=*q;
      q++;
      out++;
    }
  }
  else  while(p<num1+a)
  {
    *out=*p;
    p++;
    out++;
  }
  p=num3;
  while(p<out) printf("%d ",*p++ );
  return 0;
}
