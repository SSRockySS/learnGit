/*test vector*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
	string s;
	vector<string> sVec;
	while(cin>>s)
	{
		sVec.push_back(s);
		cout<<sVec.size()<<endl;
	}
	return 0;
}
