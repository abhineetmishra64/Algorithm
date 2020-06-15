#include<iostream>
using namespace std;
int main()
{
	int c=0,i;
	string s1,t="";
	cin>>s1;
	for(i=1;i<s1.size();i++)
	{
		if(s1[i]=='#')
			++c;
		else
		{
			t+=(char)('A'+c%26);
			c=0;
		}
	}
	cout<<t;
}	
