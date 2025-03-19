#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDblLinkedList
{
private:
	struct Node
	{
		T data;
		Node *Next;
		Node *Prev;
	};

	Node *Head = nullptr;

	Node *_AddNewNode(T data)
	{
		Node *newNode = new Node;
		newNode->data = data;
		newNode->Next = nullptr;
		newNode->Prev = nullptr;
		return newNode;
	}

public:
	void InsertAtBeginning(T Value)
	{
		Node *NewNode = _AddNewNode(Value);
		NewNode->Prev = nullptr;
		NewNode->Next = Head;

		if (Head != nullptr)
			Head->Prev = NewNode;

		Head = NewNode;
	}

	Node *Find(int Value)
	{
		while (Head != NULL)
		{
			if (Head->data == Value)
				return Head;

			Head = Head->Next;
		}
		return NULL;
	}

	void InsertAfter(Node *Current, int Value)
	{
		if (Current == NULL)
		{
			cout << "The List Is Empty" << endl;
			return;
		}

		Node *NewNode = _AddNewNode(Value);

		NewNode->Prev = Current;
		NewNode->Next = Current->Next;

		if (Current->Next != NULL)
			Current->Next->Prev = NewNode;

		Current->Next = NewNode;
	}

	void DeleteNode(int Value)
	{
		Node *Current = Head, *Prev = Head;

		if (Head == NULL)
		{
			cout << "The List Is Empty." << endl;
			return;
		}

		if (Current->Data == Value)
		{
			Head = Head->Next;
			delete Current;
			return;
		}

		void PrintList()
		{
			for (Node *cur = Head; cur; cur = cur->Next)
				cout << cur->data << "\t";
			cout << endl;
		}
	};
