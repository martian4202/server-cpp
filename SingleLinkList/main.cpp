#include "IntSLLNode.h"
#include <iostream>

using namespace std;

int main() {
	IntSLLNode* node = new IntSLLNode(10);
	node->next = new IntSLLNode(20);
	node->next->next = new IntSLLNode(30);

	while (node) {
		cout << node->info << endl;
		node = node->next;
	}

	system("Pause");
}