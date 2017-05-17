/*iterator grade*/
#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto it = scores.begin();
	while(cin>>grade)
	{
		if(grade == 0)
			break;

		if(grade<=100)
		{
			auto temp = it+(grade/10);
			++(*temp);
		}
	}
	for(auto i:scores)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
