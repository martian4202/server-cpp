#include<iostream>
#include<sstream>
#include<fstream>
#include<algorithm>
#include<xstddef>


using namespace std;


int main() {
	less<int> l;
	bool b = l(1, 2);

	if (b)
		cout << "1 < 2" << endl;

	system("Pause");
}
