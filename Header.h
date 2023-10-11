#ifndef Header_h
#define Header_h
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

class Circular_Linked_Listed
{
public:
    
Circular_Linked_Listed();
    
void displayList() const;
Node* head;
    
};


#endif /* Header_h */
