#include<stdio.h>
#include<string.h>
void sort(char *str[],int n)
{
	char *p;
	int i,j;
	for (i=0;i<n-1;i++)
	for (j=0;j<n-i-1;j++)
	if(strcmp(str[j],str[j+1])>0)
	{
		p=str[j];
		str[j]=str[j+1];
		str[j+1]=p;
	}
}
int main ()
{
	char *week[]={"Monday","Tuesday","Wednesday","Thursday","Freday"};
	sort(week,5);
	for (int i=0;i<5;i++)
	puts(week[i]);
}
