/*
1102. ѯ�� (Standard IO)
ʱ������: 5000 ms  �ռ�����: 262144 KB  ��������  

��Ŀ����
����n(n<=500)�����ֱ���Ϊ1~n��ÿ������m(m<=500)��0~10000��Χ�ڵ��������ֱ���Ϊ1~m������q(q<=100,000)�β���������������:
��һ�֣��޸Ĳ���C������x��y������ǰ��x�к͵�y�н��н�����
�ڶ��֣�ѯ�ʲ���Q������x��y�������ǰ��x�е�y���Ƕ��١�
������x��y��֤�Ϸ���

����
��һ����������n,m����ʾ������к��еĴ�С
������n�У�ÿ��m��������������ʼ����
������һ��Ϊһ������q����ʾ��������
������q�У�ÿ���ȶ���һ���ַ�����ʾ�������ͣ�Ȼ����������Ϣ�������������������

���
����ÿ��ѯ�ʲ��������ѯ�ʵĴ𰸡�

��������
3 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
4
Q 2 4
C 1 3
C 1 2
Q 2 4

�������
9
14
*/ 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int num[n+1][m+1],i,j;
	int *point [n+1];
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=m;j++) cin>>num[i][j];
	  point[i]=&num[i][1];
	}
	int ti;
	cin>>ti;
	for(i=1;i<=ti;i++) 
	{
		char q;
		cin>>q;
		switch(q)
		{
			case 'C':{
				int *temp,a,b;
				cin>>a>>b;
				temp=point[a];
				point[a]=point [b];
				point[b]=temp;
				break;
			}
			case 'Q':{
				int a,b,*temp;
				cin>>a>>b;
                temp=point[a];
                temp+=b;
                temp--;
                cout<<*temp<<endl;
				break;
			}
		}
	 } 
	 return 0;
}

