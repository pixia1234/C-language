#include <stdio.h>
char * del(char *a,char c)
{
  static char ans[100];
  char *p=ans,*q=ans;
  while(*a!='\0')
  {
    if(*a!=c)
    {
      *p=*a;
      p++;
    }
    a++;
  }
  *p='\0';
  return q;
}
int main(int argc, char const *argv[]) {
  char s[100]="Hello world";
  char c=getchar();
  char *ans=del(s,c);
  while(*ans!='\0')
  { putchar(*ans);
    ans++;
  }
  return 0;
}
