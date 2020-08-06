//直接用C++写了
//省时又省力
#include<iostream>
using namespace std;
struct student
{
  string n;
  int m[5],fail;
}stu[20];
void compare(int n)
{
  int i;
  for(i=1;i<=n;i++)
  {
    stu[i].fail=0;
    int *p=stu[i].m;
    for(int j=0;j<5;j++,p++) if(*p<60) stu[i].fail++;
  }
  for(i=1;i<=n;i++)
  {
    for(int j=i+1;j<=n;j++)
    {
      if(stu[j].fail>stu[i].fail)
      {
        int temp=stu[i].fail;
        stu[i].fail=stu[j].fail;
        stu[j].fail=temp;
        string temp2;
        stu[i].n=stu[j].n;
        stu[j].n=temp2;
      }
    }
  }
}
int main()
{
  int n,i;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cin>>stu[i].n;
    for(int j=0;j<=4;j++) cin>>stu[i].m[j];
  }
  compare(n);
  for(i=1;i<=n;i++) cout<<stu[i].n<<" "<<stu[i].fail<<endl;
  return 0;
}
