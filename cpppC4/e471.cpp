#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	int iArr[] = {1,2,3,4,5,6,7,8,9,0};
	vector<int> iVec(begin(iArr), end(iArr));
	for(auto &x:iVec)
	{
		x = (x%2 == 0)?x:2*x;
	}
	for(auto x:iVec)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}
