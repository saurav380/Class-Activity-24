#include "Customer.hpp"
#include <iostream>

int main() {
	Customer customer;

	// prompting user for input
	std::cout << "Enter Customer ID: ";
	std::cin >> customer.id;
	std::cin.ignore();

	std::cout << "Enter Customer Name: ";
	std::getline(std::cin, customer.name);

	std::cout << "Enter Customer Email: ";
	std::getline(std::cin, customer.email);

	// Display the entered information
	std::cout << "\nCustomer Information: " << std::endl;
	customer.display();

	return 0;
}