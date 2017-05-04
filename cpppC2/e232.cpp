/*test pointer*/
#include<iostream>
int main(void)
{
	int iVal = 42;
	int iVal2 = 24;
	int *p = &iVal;
	*p = *p * *p;
	std::cout<< p << " "<<*p<<std::endl;

	return 0;
}
