#include<stdio.h>
int main(int argc, char const *argv[]) {
  char *week[]={"Monday","Tuesday","Wednesday","Thursday","Friday"};
  char **p;
  for(p=week;p<week+5;p++) puts(*p);
  return 0;
}
