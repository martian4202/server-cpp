#pragma once
class IntSLLNode
{
public:
	IntSLLNode() {
		next = nullptr;
	}

	IntSLLNode(int i, IntSLLNode* in = 0) : info(i), next(in) {}

	~IntSLLNode() {
		
	}

	int info;
	IntSLLNode* next;
};

class IntSLList {
public:
	IntSLList() { head = tail = 0; }
	~IntSLList();

	int isEmpty() {
		return head == 0;
	}

	void addToHead(int);
	void addToTail(int);
	int deleteFromHead(); // delete the head and return its info;
	int deleteFromTail(); // delete the tail and return its info;
	void deleteNode(int);
	bool isInList(int) const;

private:
	IntSLLNode *head, *tail;
};

