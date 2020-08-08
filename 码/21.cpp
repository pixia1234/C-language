#include<iostream> 
using namespace std;
int index(char *t,char *s)
{
	int i=0,j=0;
	while(t[i]&&s[j])
	{
		if(t[i++]!=s[j++])
		{
			j=j-i+1;
			i=0;
		}
	}
	if(t[i]) return j-i;
	else return -1;
}
int main()
{
	char s[]={"bbbbcbcdedfgbcbc"};
	char t[]={"bcbc"};
	cout<<index(t,s)<<endl;
}
