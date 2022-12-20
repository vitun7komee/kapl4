#include "Queue_list.h"
QUEUE::QUEUE()
{
	head = NULL;
}

bool QUEUE::Empty()
{
	return head == NULL;
}

void QUEUE::Enqueue(T_info elem)
{
	TList p = new NODE1;
	p->info = elem;
	p->next = NULL;
	if (Empty())
		head = p;
	else tail->next = p;
	tail = p;
}

T_info QUEUE::Dequeue()
{
	TList p = head;
	head = head->next;
	T_info elem = p->info;
	p->next = NULL;
	delete p;
	return elem;
}

T_info QUEUE::Head()
{
	return head->info;
}

void QUEUE::View()
{
	TList p = head;
	while (p != NULL)
	{
		std::cout << p->info;
		p = p->next;
	}
	std::cout << '\n';
}

void QUEUE::Print()
{
	while (!Empty())
		std::cout << Dequeue();
	std::cout << '\n';
}
