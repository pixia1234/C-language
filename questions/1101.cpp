#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int num[n+1][m+1];
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++) cin>>num[i][j];
  }
  int t;
  cin>>t;
  for(int ii=1;ii<=t;ii++)
  {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    for(int i=a;i<=c;i++)
    {
      for(int j=b;j<=d;j++) ans+=num[i][j];
    }
    cout<<ans<<endl;
  }
  return 0;
}
