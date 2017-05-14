/*initialization of string*/
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string s1 = "hello", s2 = "world";
	string s3 = s1+", "+s2+'\n';
	string s4 = s1+", ";
	string s5 = "Hello"+(", "+s2);
	string s6 = (s1+", ")+"world";
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<s6<<endl;
}
