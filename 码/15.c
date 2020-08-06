#include <stdio.h>
float *search(float  (*p)[4],int n)
{
  float *pt;
  pt=*(p+n);
  return pt;
}
int main()
{
  float score[][4]={12,2,3,45,6,23,32,32,7,7,55,65};
  float *p;
  int i,k;
  scanf("%d",&k);
  p=search(score,k);
  {
    for(i=0;i<4;i++)
    {
      printf("%5.2f  ",*(p+i) );
    }
  }
}
