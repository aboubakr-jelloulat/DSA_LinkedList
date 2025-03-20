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

	N = MydblLinkedList.GetNode(2);

	cout << "\nNode value : " << N->value << endl;

    
}
// g++ -std=c++11