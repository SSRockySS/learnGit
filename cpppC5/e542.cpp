/*do while*/
#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string s1, s2;
    do
    {
	cout<<"please enter two strings."<<endl;
	cin>>s1>>s2;
	if(s1.size() <= s2.size())
	    cout<<s1;
	else
	    cout<<s2;
	cout<<"is short."<<endl;
    }
    while(!s1.empty() ||!s2.empty());
    return 0;
	
}
