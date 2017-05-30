/*break*/
#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string tempStr,str;
    do
    {
	cin>>str;
	if(tempStr == str)
	    break;
	cout<<str<<endl;
	tempStr = str;
    }while(!str.empty());
    return 0;
}
