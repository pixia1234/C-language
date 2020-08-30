/*
1102. 询问 (Standard IO)
时间限制: 5000 ms  空间限制: 262144 KB  具体限制  

题目描述
给出n(n<=500)行数分别编号为1~n，每行数有m(m<=500)个0~10000范围内的整数，分别编号为1~m，给定q(q<=100,000)次操作，操作分两种:
第一种：修改操作C。给定x和y，将当前第x行和第y行进行交换。
第二种：询问操作Q。给出x和y，输出当前第x行第y列是多少。
给出的x，y保证合法。

输入
第一行两个整数n,m，表示矩阵的行和列的大小
接下来n行，每行m个整数，描述初始矩阵
接下来一行为一个整数q，表示操作次数
接下来q行，每行先读入一个字符，表示操作类型，然后读入给定信息，详情见题面与样例。

输出
对于每个询问操作，输出询问的答案。

样例输入
3 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
4
Q 2 4
C 1 3
C 1 2
Q 2 4

样例输出
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

