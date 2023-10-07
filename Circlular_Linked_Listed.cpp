#include "Header.h"
#include <iostream>
using namespace std;

Circular_Linked_Listed::Circular_Linked_Listed()
{
    head = nullptr;
}

void Circular_Linked_Listed::displayList() const
{
    if(!head)
    {
        cout << "The list is empty." << endl;
    }
    
    Node* current = head;
    
    do
    {
        cout << "Node Value:" << current->data << endl;
        cout << "Previous Value:" << current->prev->data << endl;
        cout << "After Value:" << current->next->data << endl;
        cout << endl;
        
        current = current->next;
        
    }while(current!=head);
}
