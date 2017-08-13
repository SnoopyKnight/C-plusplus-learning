#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int string_length(char str[]);

int main()
{
	char s[100];
	int i,j,temp,k;
	puts("輸入你要排序的字串");
	gets(s);
		if (*s>126)
		cout<<"ERROR";
	/*for(i=0;s[i];i++)
	{
		k=i;
		for(j=i+1;s[j];j++)
		{
			if(s[j]<s[k])
				k=j;
		}
		temp=s[i];
		s[i]=s[k];
		s[k]=temp;
	}*/
	puts(s);
	system("pause");
	return 0;
	
}