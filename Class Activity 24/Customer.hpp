#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

struct Customer {
	int id;
	std::string name;
	std::string email;

	void display() const;
};
#endif