/*handle return value*/
#include<iostream>
#include<string>
using namespace std;
bool StrSubRange(const string &str1, const string &str2)
{
	if(str1.size() == str2.size())
		return str1 == str2;

	auto size = (str1.size() < str2.size())? str1.size():str2.size();
	for(decltype(size) i = 0;i!= size;++i)
		if(str1[i] != str2[i])
			return;
}
int main(int argc, char**argv)
{
	string str1 = "12334";
	string str2 = "1233";
	if(StrSubRange(str1, str2))
		cout<<"Yes"<<endl;

	return 0;
}
