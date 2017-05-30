/*called by reference*/
#include<iostream>
using namespace std;
void swap(int &r1, int &r2)
{
   int temp = r1;
   r1 = r2;
   r2 = temp;
   cout<<r1<<" "<<r2<<endl;
}
int main(void)
{
    int i1 = 1, i2 = 2;
    swap(i1, i2);
    cout<<i1<<" "<<i2<<endl;
    return 0;
}
