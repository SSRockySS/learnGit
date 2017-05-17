/*head + end*/
#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	vector<int> iVec;
	int temp;
	while(cin>>temp)
	{
		if(temp == -1)
			break;
		iVec.push_back(temp);
	}
	for(decltype(iVec.size()) i = 0;i<iVec.size() - 1;i++)
	{
		int temp = iVec[i]+iVec[i+1];
		cout<<temp<<endl;
	}
	cout<<"****************************"<<endl;
	for(decltype(iVec.size()) i = 0;i<=iVec.size()/2;i++)
	{
		int temp = iVec[i]+iVec[iVec.size() - i - 1];
		cout<<temp<<endl;
	}
	return 0;
}
