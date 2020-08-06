#include<stdio.h>
float average(int(*p)[4],int n)
{
  int i,j;
  float aver=0;
  for(i=0;i<n;i++,p++) for(j=0;j<4;j++) aver+=(*p)[j];
  aver=aver/n/4;
  return aver;
}
void output(int *p,int n) {
  int i;
  for(i=0;i<n;i++,p++) if(*p<6) printf("%d\t",*p);
  printf("\n");
}
int main ()
{
  int a[3][4]={1,2,3,4,5,6,7,8,9,0,11,12};
  float aver=average(a,3);
  output(a[0],12);
  printf("%f",aver);
  return 0;
}
