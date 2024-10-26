#include "Customer.hpp"
#include <iostream>
using namespace std;

void Customer::display() const {
	std::cout << "Customer ID: " << id << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Email: " << email << std::endl;

}