#include "LinkedList.h"

using namespace std;

int main()
{
    int value;
    LinkedList list;
    int choice;

    cout << "MENU" << endl;
    cout << "1. Insert 2. Search 3. Print 4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter a number to insert: ";
        cin >> value;
        list.insert(value);
        break;

    case 2:
        cout << "Enter a number to search:";
        cin >> value;
        int index = list.search(value);

        if (list.search(value) == true)
        {
            cout << "Found" << value << "at index: " << index << endl;
        }
        else
        {
            cout << "Not found in this list." << endl;
        }

        break;

    case 3:
        list.print();
        break;

    case 4:
        break;
    default:
        cout << "Invalid Number. Enter 1-4." << endl;
    }
    return 0;
}