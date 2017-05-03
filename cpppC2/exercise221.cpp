#include<iostream>
int main(void)
{
	int u1 = 0;
	int u2 = {1};
	int u3{2};
	int u4(3);
	std::cout<<u1<<u2<<u3<<u4<<std::endl;

	return 0;
}
