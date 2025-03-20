#include "DS/clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list : " << MydblLinkedList.Size();

    MydblLinkedList.Clear();

    MydblLinkedList.PrintList();

    if (MydblLinkedList.IsEmpty())
        cout << "true";
    else
        cout << "no";

    cout << MydblLinkedList.Size();

}
// g++ -std=c++11