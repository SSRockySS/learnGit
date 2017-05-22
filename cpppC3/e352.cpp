/*init vector by array*/
#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	int iArr[] = {1 , 2, 2, 2};
	int iArr2[] = {5, 5, 5, 6};
	int iArr3[] = {9, 9};
	vector<int> iVec(begin(iArr), end(iArr));
	vector<int> iVec2(iArr+1, iArr+3);
	for(auto i:iVec)
		cout<<i<<" ";
	cout<<endl;
	for(auto i:iVec2)
		cout<<i<<" ";
	cout<<endl;

	return 0;

}
