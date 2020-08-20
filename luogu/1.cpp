#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int k,len;
  string x;
  cin>>k>>x;
  string ans;
  len=x.length();
  for(int i=0;i<k;i++) ans[i]='0';
  ans[k]='1';
  for(int i=0;i<len;i++) ans[i]=x[len-i-1];
  for(int i=len>k?len:k;i>=0;i--) cout<<ans[i];
  return 0;
}
