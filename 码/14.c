#include <stdio.h>
#include <math.h>
float f1(float x)
{return x*x*x+x*x-3*x+2;}
float f2(float x)
{return x*x-2*x-8;}
float divide(float (*p)(float ),float x1,float x2)
{
  float x0;
  do
  {
    x0=(x1+x2)/2;
    if(p(x1)*p(x0)>0) x1=x0;
    if(p(x1)*p(x0)<0) x2=x0;
  }while (fabs(p(x0))>1e-6);
  return x0;
}
int main(int argc, char const *argv[]) {
  float a,b;
  scanf("%f%f",&a,&b);
  printf("%f\n",divide(f1,a,b));
  scanf("%f%f",&a,&b);
  printf("%f\n",divide(f2,a,b));
  return 0;
}
