/*called by value*/
#include<iostream>
using namespace std;
void swap(int *p1, int *p2)
{
    int *temp = p1;
    p1 = p2;
    p2 = temp;
    cout<<*p1<<" "<<*p2<<endl;
}
int main(void)
{
    //int i1 = 1,i2 = 2;
    int p1 = 1;
    int p2 = 2;
    swap(&p1, &p2);
    cout<<p1<<" "<<p2<<endl;
    return 0;
}
