/*use cctype:change*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	string s("Hello, world!!!!");
	if(!s.empty())
		cout<<s<<endl;
	
	for(decltype(s.size()) index = 0;index<s.size()&&!isspace(s[index]);++index)
		s[index] = toupper(s[index]);

	cout<<s<<endl;

	for(auto &c:s)
		c = toupper(c);
	cout<<s<<endl;
	return 0;
}
