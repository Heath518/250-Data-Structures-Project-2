#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
    Circular_Linked_Listed list;
    
    Node* node1= new Node{11,nullptr,nullptr};
    Node* node2= new Node{22,nullptr,nullptr};
    Node* node3= new Node{33,nullptr,nullptr};
    Node* node4= new Node{44,nullptr,nullptr};
    Node* node5= new Node{55,nullptr,nullptr};
    
    list.head = node1;
    node1->next = node2;
    node2->prev =node1;
    node2->next = node3;
    node3->prev=node2;
    node3->next=node4;
    node4->prev=node3;
    node4->next=node5;
    node5->prev=node4;
    node5->next=node1;
    node1->prev=node5;
    
    cout << "Original List:\n";
    list.displayList();
    
    node1->next->next->next = node1->prev;
    cout << endl;
    cout << "After the assignment 1 \n";
    list.displayList();
    
    node1->prev->prev->prev = node1->next->next->next->prev;
    cout << endl;
    cout << "After the assignment 2 \n";
    list.displayList();
    
    node1->next->next->next->prev = node1->prev->prev->prev;
    cout << endl;
    cout << "After the assignment 3 \n";
    list.displayList();
    
    node1->next = node1->next->next;
    cout << endl;
    cout << "After the assignment 4 \n";
    list.displayList();
    
    node1->next->prev->next = node1->next->next->next;
    cout << endl;
    cout << "After the assignment 5 \n";
    list.displayList();
    
    return 0;
    
}
