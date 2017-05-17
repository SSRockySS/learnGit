/*print vector*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void PrintVec(vector<int> vec);
int main(void)
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};
	PrintVec(v1);
	PrintVec(v2);
	PrintVec(v3);
	PrintVec(v4);
	PrintVec(v5);
	
	for(auto a:v6)
		cout<<a<<" ";
	cout<<endl;

	for(auto a:v7)
			cout<<a<<" ";
	cout<<endl;
	return 0;
}
void PrintVec(vector<int> vec)
{
	for(auto a:vec)
	{
		cout<<a<<" ";
	}
	cout<<endl;
}
