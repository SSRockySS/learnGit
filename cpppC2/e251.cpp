/*test alias*/
#include<iostream>
int main(void)
{
	typedef double enough;
	using eno = double;
	eno e1 = 3.1415926;
	enough e2 = e1;
	std::cout<<e1<<" "<<e2<<std::endl;

	return 0;
}
