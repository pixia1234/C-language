//2）找出数组中每行的最大值，并将这些数相加求和。（利用函数指针）
#include<stdio.h>
int main()
{
  int num[3][4]={18,28,38,48,58,68,78,88,98,8,19,29};
  int (*p)[4],i,ans=0;
  p=num;
  for(i=0;i<3;i++,p++)
  {
    int temp=**p,j;
    for(j=1;j<4;j++) if(*(*p+j)>temp) temp=*(*p+j);
    ans+=temp;
  }
  printf("%d",ans);
}
