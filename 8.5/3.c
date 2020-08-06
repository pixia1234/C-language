#include <stdio.h>
#include <math.h>
float f1(float a,float b)
{
  return( b*b/2+b-a*a/2-a);
}
float f2(float a,float b)
{
  return(b*b+3*b-a*a-3*a);
}
float f3(float a,float b)
{
  return(exp(b)-exp(a)+b-a);
}
float f4(float a,float b)
{
  return(b*b*b/3-a*a*a/3+b*b-a*a+b-a);
}
float f5(float a,float b)
{
  return(b*b*b*b/4-a*a*a*a/4);
}
int main(int argc, char const *argv[]) {
  float a,b,(*p)(float, float);
  int i;
  scanf("%d%f%f",&i,&a,&b );
  if(i==1) p=f1;
  if(i==2) p=f2;
  if(i==3) p=f3;
  if(i==4) p=f4;
  if(i==5) p=f5;
  printf("%f",p(a,b));
  return 0;
}
