#include <stdio.h>
int main(int argc, char const *argv[]) {
  char p[1000],*q;
  scanf("%s",p);
  q=p;
  int i=0;
  while(*q!='\0')
  {
    if((*q-48)%2==1&&i%2==0) printf("%c",*q);
    q++;   i++;
  }
  return 0;
}
