#pragma once
#ifndef __PERSON_H
#define __PERSON_H

#include <string>
#include <iostream>

class Person{
public:
	Person() = default;
	Person(const Person& other) {
		name = other.name;
		address = other.address;
	}

	Person(const std::string n, const std::string addr):name(n), address(addr) {}
	Person(std::istream& is) {
		is >> name >> address;
	}

	std::ostream& print(std::ostream& os = std::cout) {
		os << "name: " << name << std::endl;
		os << "address: " << address << std::endl;
		return os;
	}
	std::string getName() const {
		return name;
	}
	std::string getAddress() const { return address; }

	void updateName(const std::string& newName) {
		name = newName;
	}

	void updateAddress(const std::string& newAddr) {
		address = newAddr;
	}
private:
	std::string name;
	std::string address;
};
#endif // !__PERSON_H

