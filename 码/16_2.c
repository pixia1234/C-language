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
void sort(char *str[],int n)
{
  char *p;
  int i,j;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(strcmp(str[j],str[j+1])>0)
      {
        p=str[j];
        str[j]=str[i];
        str[i]=p;
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
