/*in, change & out*/
#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
int main(void)
{
	vector<string> vec;
	string temp;
	while(cin>>temp)
	{
		if(temp == "Quit")
			break;
		vec.push_back(temp);
	}
	for(auto &s:vec)
	{
		for(auto &c:s)
			c = toupper(c);

		cout<<s<<endl;
	}
	
	return 0;
}
