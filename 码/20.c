#include<stdio.h>
struct
{
  int id;
  char name[20];
  char sex;
  float score[4];
  float aver;
}stu;
int main(int argc, char const *argv[]) {
  while(1){
  int i;
  printf("请输入学号：");
  scanf("%d",&stu.id);
  printf("请输入姓名:");
  getchar(); gets(stu.name);
  printf("请输入学生性别：");
  scanf(" %c",&stu.sex);
  printf("请输入%s的四科成绩:",stu.name);
  for(i=0;i<4;i++)
  {scanf("%f",&stu.score[i]);
  stu.aver+=stu.score[i];
  }
  stu.aver/=4;
  printf("\n%s的信息如下\n",stu.name);
  printf("学号：%d\t姓别：%c\n",stu.id,stu.sex);
  printf("成绩：");
  for(i=0;i<4;i++) printf("%.1f\t",stu.score[i]);
  printf("\n平均分：%.2f\n",stu.aver);
}
}
