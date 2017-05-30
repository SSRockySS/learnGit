/*func exercise*/
#include<iostream>
using namespace std;
int abs(int i)
{
    if(i>=0)
	return i;
    else
	return -i;
}
int main(void)
{
    cout<<abs(1)<<" "<<abs(-5)<<endl;
    return 0;
}
