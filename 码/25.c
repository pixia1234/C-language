#include <stdio.h>
struct Student
{
  int num;
  float score;
  struct Student *next;
};
int main(int argc, char const *argv[]) {
  struct Student a,b,c,*head,*p;
  a.num=10101;a.score=90.0;
  b.num=10103;b.score=88.5;
  c.num=10105;c.score=99.5;
  head=&a;a.next=&b;
  b.next=&c;c.next=NULL;
  p=head;
  while(p!=NULL)
  {
    printf("%d\t%f\n",p->num,p->score);
    p=p->next;
  }
  return 0;
}
