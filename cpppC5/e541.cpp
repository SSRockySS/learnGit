/*for*/
#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    vector<int> iVec1{0, 1, 1, 2};
    vector<int> iVec2{0, 1, 1, 2, 3, 5, 8};
    auto beg1 = iVec1.begin(), beg2 = iVec2.begin();
    for(;beg1 != iVec1.end()&&beg2 != iVec2.end();)
    {
	if(*beg1 != *beg2)
	{
	    cout<<"false"<<endl;
	    return 0;
	}

	++beg1;
	++beg2;
    }
    cout<<"true"<<endl;
    return 0;
}
