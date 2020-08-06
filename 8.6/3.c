//3）使用指向指针的指针输出12个月，然后按由大到小输出各月。
#include<stdio.h>
#include<string.h>
int main()
{
  char *name[]={"January","February","March","April","May","June",
  "July","August","Semptember","October","November","December"};
  int i;
  for(i=0;i<12;i++) printf("%s\n",name[i]);
  printf("\n");
  for(i=0;i<12;i++)
  {
    int j;
    for(j=i+1;j<12;j++) if(strcmp(name[i],name[j])>0)
    {
      char *temp=name[i];
      name[i]=name[j];
      name[j]=temp;
    }
  }
  for(i=0;i<12;i++) printf("%s\n",name[i]);
  return 0;
}
