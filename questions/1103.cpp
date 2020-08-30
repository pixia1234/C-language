/*
1103. 字符串操作 (Standard IO)
时间限制: 1000 ms  空间限制: 262144 KB  具体限制  

题目描述
给出n(n<=1,000)个字符串，每个字符串的长度不超过100，都是由小写字母构成。现在给你三种询问
(1)询问“0”需要你某个区间内求出最长的字符串；
(2)询问“1”需要你求出某个区间内字典序最大的字符串；
(3)询问“2”需要你求出某个区间内出现某个关键字母最多的字符串。如果有多个并列最大的情况，则输出最先输入的字符串。

输入
第一行为一个整数n与一个字符，分别表示字符串的数量和关键字符
接下来n行，每行读入一个字符串
接下来一行为一个整数q(q<=100)，表示询问次数。
接下来q行每行3个整数L,R,sig，分别表示询问区间为L~R和询问的类型。

输出
共q行，第i行为第i个询问的答案。

样例输入
3 a
abc
aaaa
aba
3
1 3 0
1 2 1
2 3 2

样例输出
aaaa
abc
aaaa
*/
#include <bits/stdc++.h>
using namespace std;
char x;
int guan(string a)
{
	int i,ans=0;
	for(i=0;i<a.length();i++) if(a[i]==x)ans++;
	return ans;
}
int main()
{
	int n,i;
	cin>>n>>x;
	string zifu[n+1];
	for(i=1;i<=n;i++) cin>>zifu[i];
	int q;
	cin>>q;
	for(i=0;i<q;i++) 
	{
		int l,r,sig;
		cin>>l>>r>>sig;
		switch(sig)
		{
			case 0:{
				int j,temp=l;
				for(j=l;j<=r;j++) if(zifu[j].length()>zifu[temp].length()) temp=j;
				cout<<zifu[temp]<<endl;
				break;
			}
			case 1:{
				int j,temp=l;
				for(j=l;j<=r;j++) if(zifu[j]>zifu[temp]) temp=j;
				cout<<zifu[temp]<<endl;
				break;
			}
			case 2:{
				int j,temp=l;
				for(j=l;j<=r;j++) if(guan(zifu[j])>guan(zifu[temp])) temp=j;
				cout<<zifu[temp]<<endl;
				break;
			}
		}
	}
	return 0;
}

