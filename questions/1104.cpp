//化学实验
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int sum,m[10000]={0},v[10000]={0},i;
	cin>>sum;
	for(i=1;i<=sum;i++) cin>>m[i]>>v[i];
	int ti;
	cin>>ti;
	for(i=1;i<=ti;i++)
	{
		char c;
		cin>>c;
		switch(c)
		{
			case 'E':{
				int a,b;
				cin>>a>>b;
				int mm=0,vv=0;
				for(int j=a;j<=b;j++)
				{
					mm+=m[j];
					vv+=v[j];
				}
				printf("%.3f\n",mm*1.0/vv);
				break;
			}
			case 'I':{
				int a,b,c;
				cin>>a>>b>>c;
				m[sum+1]=b;
				v[sum+1]=c;
				for(int j=++sum;j>a+1;j--) 
				{
					swap(m[j],m[j-1]);
					swap(v[j],v[j-1]);
				}
				break;
			}
			case 'D':{
				int x;
				cin>>x;
				for(int j=x;j<sum;j++) 
				{
					m[j]=m[j+1];
					v[j]=v[j+1];
				}
				m[sum+1]=0;
				v[sum+1]=0;
				sum--;
				break;
			}
			
		} 
	}
	return 0;
}

