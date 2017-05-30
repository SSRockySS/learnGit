#include<iostream>
using namespace std;
int func(int i)
{
    static int cnt = -1;
    int tmp = i;
    ++cnt;
    return cnt;
}
int main(void)
{
    for(int i = 0; i!= 10;i++)
    {
	cout<<func(i)<<endl;
    }
    return 0;
}
