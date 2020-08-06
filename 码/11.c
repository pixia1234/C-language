#include<stdio.h>
void str_cpy(char *a,char *b)
{
  while(*a!='\0')
  {
    *b=*a;
    b++;
    a++;
  }
  *b='\0';
}
int main(int argc, char const *argv[]) {
  {
    char a[100]={"I am a teacherxx"},b[100]="You are studentsx";
    str_cpy(a,b);
    puts(a);puts(b);
  }
  return 0;
}
