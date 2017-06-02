/*initializer list*/
#include<iostream>
using namespace std;
void ErrMsg(initializer_list<int> li)
{
	int num = 0;
	for(auto i:li)
		num+=i;
	cout<<num<<endl;
}
int main(int argc, char*argv[])
{
	initializer_list<int> li{0, 1, 2, 3, 4};
	ErrMsg(li);
	return 0;
}
