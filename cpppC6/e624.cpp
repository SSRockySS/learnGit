/*parameter*/
#include<iostream>
using namespace std;
int compare(int i, int *ip)
{
	if(i<*ip)
		return *ip;
	else
		return i;
}
int main()
{
	int i1 = 1, i2 = 2;
	cout<<compare(i1, &i2)<<endl;
	return 0;

}
