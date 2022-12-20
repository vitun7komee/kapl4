#pragma once
#include <iostream>
using TInfo = int;
struct NODE
{
	TInfo info;
	NODE* left, * right;
	int count = 1;

	NODE(TInfo info, NODE* left = nullptr, NODE* right = nullptr) : info(info), left(left), right(right) {}
	~NODE()
	{
		left = nullptr;
		right = nullptr;
	}
};
using Tree = NODE*;
using T_info = Tree;
struct NODE1
{
	T_info info;
	NODE1* next;
};
typedef NODE1* TList;
class QUEUE
{
private:
	TList head, tail;
public:
	QUEUE();
	bool Empty();
	void Enqueue(T_info elem);
	T_info Dequeue();
	T_info Head();
	void View();
	void Print();
};

