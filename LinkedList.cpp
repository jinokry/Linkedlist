#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = NULL;
}

LinkedList::~LinkedList()
{
    Node *current = head;
    Node *next;

    while (current != NULL)
    {
        next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insert(int value)
{
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

bool LinkedList::search(int value)
{
    Node *current = head;

    while (current != NULL)
    {
        if (current->data == value)
        {
            return true;
            current = current->next;
        }
        return false;
    }
}

void LinkedList::print()
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}