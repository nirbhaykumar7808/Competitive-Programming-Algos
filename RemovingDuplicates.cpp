#include<iostream>
using namespace std;

/* removing the duplicate problem through recursion*/

void removex(char s[])
{
	
	if(s[0]=='\0')
	{
		return;
	}
	if (s[0] != s[1])
	{
		removex(s+1);
		
		
	}
	else
	{
		for(int i=1;s[i-1] != 0;i++)
		{
			s[i-1]=s[i];
		}
		removex(s);
	}
}
int main()
{
char str[100];	
cin>>str;
removex(str);
cout<<str<<endl;
return 0;
}

