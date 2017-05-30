/*Exception Handle*/
#include<iostream>
#include<stdexcept>
using namespace std;
int Div(int i1, int i2);
int DivWithEx(int i1, int i2);
int main(void)
{
    int i1, i2;
    cout<<"enter two num."<<endl;
    cin>>i1>>i2;
    //int result1 = Div(i1, i2);
    //cout<<result1<<endl;
    try
    {
	int result2 = DivWithEx(i1, i2);
	cout<<result2<<endl;
    }
    catch(runtime_error err)
    {
	cout<<err.what()<<"do you wan't to enter new num?Y/n."<<endl;
	char c;
	cin>>c;
	if(!cin || c == 'n')
            return 0;
    }
    //int result2 = DivWithEx(i1, i2);
    //cout<<result2<<endl;
    return 0;
}
int Div(int i1, int i2)
{
    return i1/i2;
}
int DivWithEx(int i1, int i2)
{
    if(i2 == 0)
	throw runtime_error("i2 can't be 0.");
    return i1/i2;
}
