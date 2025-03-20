#include "DS/clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(42);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    MydblLinkedList.PrintList();

	clsDblLinkedList <int> ::Node *N;



	cout << "\nItem(2) Value is: " << MydblLinkedList.GetItem(2);

    
}
// g++ -std=c++11