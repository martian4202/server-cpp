#pragma once
//
//template <typename Comparable>
//class BinarySearchTree {
//public:
//	BinarySearchTree();
//	BinarySearchTree(const BinatySearchTree &rhs);
//	~BinarySearchTree();
//
//	const Comparable& findMin() const;
//	const Comparable& findMax() const;
//	bool contains(const Comparable& x) const;
//	bool isEmpty() const;
//	void printTree() const;
//
//	void makeEmpty();
//	void insert(const Comparable& x);
//	void remove(const Comparable& x);
//
//	const BinarySearchTree& operator=(const BinarySearchTree& rhs);
//
//private:
//	struct BinaryNode{
//		Comparable element;
//		BinaryNode* left;
//		BinaryNode* right;
//
//		BinaryNode(const Comparable& theElement, BinaryNode* lt, BinaryNode* rt) :element(theElement), left(lt), right(rt) {}
//	};
//
//	BinaryNode* root;
//
//	void insert(const Comparable& x, BInatyNode* &t) const;
//	void remove(const Comparable& x, BinatyNode* &t) const;
//	BinaryNode* findMin(BinaryNode* t) const;
//	BianryNode* findMax(BinaryNode* t) const;
//	bool contains(const Comparable& x, BiantyNode* t) const;
//	void makeEmpty(BinaryNode* & t);
//	void printTree(BinaryNode* t) const;
//	BinaryNode* clone(BinaryNode* t) const;
//};
