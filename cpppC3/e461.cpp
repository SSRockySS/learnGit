/*++*/
#include<iostream>
using namespace std;
int main(void)
{
	int iVal1;
	int iVal2;
	//cout<<++iVal1<<endl;
	//cout<<iVal2++<<endl;
	for(iVal1 = 0;iVal1<10;cout<<iVal1++)
		cout<<" ";
	cout<<iVal1<<endl;
	for(iVal2 = 0;iVal2<10;cout<<++iVal2)
		cout<<" ";
	cout<<iVal2<<endl;
	return 0;
}
