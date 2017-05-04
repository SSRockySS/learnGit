/* test reference*/
#include<iostream>
int main(void)
{
	int i;
	int &ri = i;
	i = 5;
	ri = 10;
	std::cout<<i<<" "<<ri<<std::endl;
	return 0;
}
