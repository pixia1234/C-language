#include<stdio.h>
int main(int argc, char const *argv[]) {
  int a=2,b=3,c=5;
  printf("%d\t%d\t%d\n",a,b,c);
  {
    int a=b=2;
    a=b+c;
    printf("%d\t%d\t%d\n",a,b,c);
  }
  c=a-b;
  printf("%d\t%d\t%d\n",a,b,c);
}
