#include "DS/clsDblLinkedList.h"

int main(void)
{
	clsDblLinkedList<int> list;

	list.InsertAtBeginning(3);
	list.InsertAtBeginning(2);
	list.InsertAtBeginning(1);

	list.PrintList();
	
	
}
