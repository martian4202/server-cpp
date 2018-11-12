#include "IntSLLNode.h"

IntSLList::~IntSLList()
{
	for (IntSLLNode* p; !isEmpty();) {
		p = head->next;
		delete head;
		head = p;
	}
}

void IntSLList::addToHead(int n)
{
	head = new IntSLLNode(n, head);
	if (tail == 0) {
		tail = head;
	}
}

void IntSLList::addToTail(int n) {
	IntSLLNode* node = new IntSLLNode(n);
	if (tail == 0)
		head = tail = node;
	else
	{
		tail->next = node;
		tail = node;
	}
}

int IntSLList::deleteFromHead() {
	int el = head->info;
	IntSLLNode* tmp = head;
	if (head == tail)
		head = tail = 0;
	else
		head = head->next;
	delete tmp;
	return el;
}

int IntSLList::deleteFromTail()
{
	int el = tail->info;
	if (head == tail)
	{
		delete tail;
		head = tail = 0;
	}
	else {
		IntSLLNode* node;
		while (node->next != tail)
		{
			node = node->next;
		}

		delete tail;
		tail = node;
		tail->next = 0;
	}
	return el;
}

void IntSLList::deleteNode(int el)
{
	if (head == 0)
		return;

	if (head == tail && head->info == el)
	{
		IntSLLNode* node = head;
		head = tail = 0;
		delete node;
	}
	else if (head->info == el)
	{
		IntSLLNode* node = head;
		head = head->next;
		delete node;
	}
	else
	{
		IntSLLNode *pre, *node;
		for (pre = head, node = pre->next; node != 0 && node->info != el;
			pre = pre->next, node = node->next)
		{
			if (node != 0)
			{
				pre->next = node->next;
				if (node == tail)
					tail = pre;
				delete node;
			}
		}
	}
}

bool IntSLList::isInList(int el) const
{
	IntSLLNode* tmp;
	for(tmp = head; tmp != 0 && tmp->info != el; tmp = tmp ->next){}
	return tmp != 0;
}