#include<stdio.h>
struct code
{
  int i;
  char c;
}a[]={{100,'a'},{200,'b'},{300,'c'},{400,'d'}};
int main(int argc, char const *argv[]) {
  struct code *p=a;
  printf("%d\n",++p->i);
  printf("%c\n",(++p)->c );
  printf("%d\n",(p++)->i );
  printf("%c\n",++p->c );
  printf("%d\n",p->i++ );
  printf("%d\n",p->i );
  return 0;
}
