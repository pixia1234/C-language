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
  printf("������ѧ�ţ�");
  scanf("%d",&stu.id);
  printf("����������:");
  getchar(); gets(stu.name);
  printf("������ѧ���Ա�");
  scanf(" %c",&stu.sex);
  printf("������%s���ĿƳɼ�:",stu.name);
  for(i=0;i<4;i++)
  {scanf("%f",&stu.score[i]);
  stu.aver+=stu.score[i];
  }
  stu.aver/=4;
  printf("\n%s����Ϣ����\n",stu.name);
  printf("ѧ�ţ�%d\t�ձ�%c\n",stu.id,stu.sex);
  printf("�ɼ���");
  for(i=0;i<4;i++) printf("%.1f\t",stu.score[i]);
  printf("\nƽ���֣�%.2f\n",stu.aver);
}
}
