/*iterator*/
#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	vector<int> iVec(10, 4);
	for(auto it = iVec.begin();it != iVec.end();++it)
	{
		*it = (*it)*2;
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}
