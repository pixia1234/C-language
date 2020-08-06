//4）求解整数n的所有约数两两之间最大公约数的和。（选作）
#include <stdio.h>

int maxyue(int a,int b)
{
  if(a<b)
  {
    int temp=a;
    a=b;
    b=temp;
  }
  if(a%b==0) return b;
  else return maxyue(a-b,b);
}
int main(int argc, char const *argv[]) {
  int n,num[1000],i,*p;
  p=num;
  scanf("%d",&n);
  for(i=1;i<=n;i++) if(n%i==0) *p++=i;
  int ans=0;
  int *q,*qq;
  for(q=num;q<p-1;q++)
  {
    for(qq=num+1;qq<p;qq++) ans+=maxyue(*q,*qq);
  }
  printf("%d\n",ans);
  return 0;
}
