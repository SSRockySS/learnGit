/*test decltype*/
#include<iostream>
int main(void)
{
	auto testValue = 1;
	int &refValue = testValue;
	std::cout<<refValue<<std::endl;

	return 0;
}
