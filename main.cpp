#include "doublyLinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    int i;
    int num;

    doublyLinkedList<int> list1, list2;

    cout << "Enter a list of positive integers ending with -999: ";
    cin >> num;

    while (num != -999)
    {
        list1.insert(num);
        cin >> num;
    }

    list2 = list1;

    cout << "\nList in ascending order: ";
    list2.print();
    cout << endl;

    cout << "\nList in descending order: ";
    list2.reversePrint();
    cout << endl;

    cout << "\nEnter the number to be deleted: ";
    cin >> num;
    cout << endl;

    list2.deleteNode(num);

    cout << "\nList after deleting " << num << endl;
    list2.print();
    cout << endl;

    cout << "\nEnter the item to be searched: ";
    cin >> num;
    cout << endl;

    list2.search(num);

    if (list2.search(num))
    {
        cout << num << " found in the list" << endl;
    }
    else
        cout << num << " is not in the list" << endl;

    cout << "\n********Testing copy constructor***********" << endl;

    cout << "intList: ";
    list1.print();
    cout << endl;

    cout << "\n********Testing assignment operator*********" << endl;

    cout << "temp: ";
    list2.print();
    cout << endl;

    return 0;
}
