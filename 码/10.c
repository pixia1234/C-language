#include<stdio.h>
void search(float (*p)[4],int n)
{
  int i,j,flag;
  for(j=0;j<n;j++)
  {
    flag=0;
    for(i=0;i<4;i++)
    {                 
      if(*(*(p+j)+i)<20) flag=1;
    }
    if(flag)
    {
      printf("%d\n",j+1);
      for(i=0;i<4;i++) printf("%5.1f ",*(*(p+j)+i) );
      printf("\n" );
    }
  }
}
int  main(int argc, char const *argv[]) {
  float score[3][4]={41,23,46,57,5,89,5,6,10,67,8,7};
  search(score,3);
  return 0;
}
