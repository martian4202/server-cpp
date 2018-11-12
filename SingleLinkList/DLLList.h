#pragma once

template<typename T>
class DLLNode {
public:
	DLLNode() {
		prev = next = 0;
	}

	DLLNode(const T& el, DLLNode* n = 0, DLLNode* p = 0) {
		prev = p;
		info = T;
		next = n;
	}

private:
	T info;
	DLLNode *prev, next;
};

template<typename T>
class DoublyLinkedList
{
public:
	DoublyLinkedList()
	{
		head = tail = 0;
	}
	void addToDLLTail(const T&);
	T deleteFromDLLTail();
protected:
	DLLNode<T> *head, *tail;
};

