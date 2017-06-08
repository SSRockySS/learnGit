#include"SalesData.h"
SalesData &SalesData::Combine(const SalesData &rhs)
{
	numSold += rhs.numSold;
	revenue += rhs.revenue;
	return *this;
}
double SalesData::avgPrice() const
{
	if(numSold != 0)
		return revenue/numSold;
	else
		return 0;
}

SalesData Add(const SalesData &lhs, const SalesData &rhs)
{
	SalesData sum = lhs;
	sum.Combine(rhs);
	return sum;
}
std::istream &Read(std::istream &is, SalesData &item)
{
	double price = 0.0;
	is>>item.isbn>>item.numSold>>price;
	item.revenue = price * item.numSold;
	return is;
}
std::ostream &Print(std::ostream &os, const SalesData &item)
{
	os<<item.ISBN()<<" "<<item.numSold<<" "
	  <<item.revenue<<" "<<item.avgPrice();
	return os;
}
