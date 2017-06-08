#ifndef _SALESDATA_H_
#define _SALESDATA_H_
#include<iostream>
#include<string>
class SalesData
{
public:
	std::string ISBN() const {return isbn;};//return isbn no.
	SalesData &Combine(const SalesData &);
	double avgPrice() const;

private:
	std::string isbn;
	unsigned numSold = 0;
	double revenue = 0.0;
};
SalesData Add(const SalesData &,const SalesData &);
std::istream &Read(std::istream &, SalesData &);
std::ostream &Print(std::ostream &,const SalesData &);
#endif
