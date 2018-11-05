#pragma once

#ifndef __SCREEN_H
#define	__SCREEN_H

#include <string>
class Screen {
public:
	using pos = std::string::size_type;
	Screen() = default;

	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht * wd, c) {};
	char get() const { return contents[cursor]; }
	char get(pos ht, pos wd);
	Screen& move(pos ht, pos wd);

	Screen& set(char);
	Screen& set(pos, pos, char);

	Screen& display(std::ostream& os) {
		do_display(os);
		return *this;
	}

	const Screen& display(std::ostream &os) const {
		do_display(os);
		return *this;
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;

	void do_display(std::ostream& os) const {
		os << contents;
	}
};

#endif // !__SCREEN_H

class Y;

class X {
public:
	X() = default ;
	Y* y;
};

class Y {
public:
	X x;
};

class Account {
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
};

void Account::rate(double newRate) {
	interestRate = newRate;
}

double Account::initRate(){}