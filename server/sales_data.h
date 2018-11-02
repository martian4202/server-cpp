#ifndef __SALES_DATA_H
#define __SALES_DATA_H

#include <string>
#include <iostream>

struct Sales_data {
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	std::string bookNo;
	unsigned units_sold;
	double revenue;

};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& fread(std::istream&, Sales_data&);

struct Person
{
	std::string name;
	std::string address;

	std::string getName() const {
		return name;
	}
	std::string getAddress() const { return address; }
};

#endif