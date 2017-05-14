/*use cctype*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	string s("Hello, world!!!!");
	decltype(s.size()) cnt = 0;
	for(auto c:s)
	{
		if(ispunct(c))
				++cnt;
	}
	cout<<cnt<<endl;
}
