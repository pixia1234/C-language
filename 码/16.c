#include<stdio.h>
#include<string.h>
void sort(char *name[],int n);
void print(char *name[],int n);
int main()
{
  char *name[]={"follow","great","fortran","computer"};
  int n=4;
  sort(name,n);
  print(name,n);
  return 0;
}
void sort(char *name[],int n)
{
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=i+1;j<4;j++)
    {
      char *temp;
      if(strcmp(name[j],name[i])>0)
      {
        temp=name[j];
        name[j]=name[i];
        name[i]=temp;
      }
    }
  }
}
void print(char *name[],int n)
{
  int i;
  for(i=n-1;i>=0;i--)
  {
    while(*name[i]!='\0')
    printf("%c",*name[i]++);
    printf("\n");
  }
}
