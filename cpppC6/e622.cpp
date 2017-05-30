/*reference*/
#include<iostream>
using namespace std;
void reset(int &i)
{
    i = 0;
}
int main(void)
{
    int i = 2;
    reset(i);
    cout<<i<<endl;
    return 0;
}
