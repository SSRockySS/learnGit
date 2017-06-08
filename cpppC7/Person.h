#ifndef _PERSON_H_
#define _PERSON_H_
#include<string>
class Person
{
public:
	std::string getName() const {return name;}
	std::string getAddr() const {return address;}
	
private:
	std::string name;
	std::string address;
};
#endif
