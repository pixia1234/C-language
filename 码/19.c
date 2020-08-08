#include<stdio.h>
struct ay
{
  char a;
  int year;
  double x;
}t;
int main(int argc, char const *argv[]) {
  printf("%d",sizeof(struct ay));
  return 0;
}
