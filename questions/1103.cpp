/*
1103. �ַ������� (Standard IO)
ʱ������: 1000 ms  �ռ�����: 262144 KB  ��������  

��Ŀ����
����n(n<=1,000)���ַ�����ÿ���ַ����ĳ��Ȳ�����100��������Сд��ĸ���ɡ����ڸ�������ѯ��
(1)ѯ�ʡ�0����Ҫ��ĳ���������������ַ�����
(2)ѯ�ʡ�1����Ҫ�����ĳ���������ֵ��������ַ�����
(3)ѯ�ʡ�2����Ҫ�����ĳ�������ڳ���ĳ���ؼ���ĸ�����ַ���������ж������������������������������ַ�����

����
��һ��Ϊһ������n��һ���ַ����ֱ��ʾ�ַ����������͹ؼ��ַ�
������n�У�ÿ�ж���һ���ַ���
������һ��Ϊһ������q(q<=100)����ʾѯ�ʴ�����
������q��ÿ��3������L,R,sig���ֱ��ʾѯ������ΪL~R��ѯ�ʵ����͡�

���
��q�У���i��Ϊ��i��ѯ�ʵĴ𰸡�

��������
3 a
abc
aaaa
aba
3
1 3 0
1 2 1
2 3 2

�������
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

