/*exercise 3.2*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	//e3.6
	string s1("hahahahahahha");
	for(auto &c:s1)
		c = 'x';
	cout<<s1<<endl;
	//e3.7
	for(char &c:s1)
		c = 'y';
	cout<<s1<<endl;
	//3.9
	string s2;
	cout<<s2[0]<<endl;
	//3.10
	string line, newLine;
	getline(cin,line);
	for(auto c:line)
		if(!ispunct(c))
			newLine+=c;
	cout<<newLine<<endl;
	
	return 0;

}
