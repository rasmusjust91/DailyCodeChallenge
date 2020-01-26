#include <iostream>
#include "./DoublyLinkedList.h"
using namespace std;

int main() 
{
    DoublyLinkedList DLL = DoublyLinkedList();
    cout << DLL.n_nodes << endl;

    DLL.add(3);
    DLL.add(2);
    DLL.add(7);
    DLL.add(34);

    cout<<"The doubly linked list is: ";
    DLL.get_list(); 
    cout<<"Index 2 in DLL is: ";
    cout << endl << DLL.get_index(2) << endl;


    return 0; 
}; 
   