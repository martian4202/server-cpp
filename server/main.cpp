#include<iostream>
#include<sstream>
#include<fstream>


using namespace std;



int main() {
	int a = 10, b = 20;
	int m = a ^ b;
	int n = (a & b) << 1;
	while (n != 0)
	{
		m = m ^ n;
		n = (m & n) << 1;
	}

	cout << a << "+" << b << "= " << m;

	system("Pause");
}

