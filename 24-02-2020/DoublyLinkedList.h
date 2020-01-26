#include <iostream>
using namespace std;

class DoublyLinkedList {
/*
  Contains structure for a DLL with only a few simple methods
*/

  private:
  struct Node {
    int number;
    struct Node* next;
    struct Node* prev;  
  };

  public:
  int n_nodes = 0;
  struct Node* head = NULL; 

  void add(int n){
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node)); 
    newnode->number = n; 
    newnode->prev = NULL; 
    newnode->next = head;     
    if(head !=  NULL) 
      head->prev = newnode;     
    head = newnode; 

    n_nodes++;
  };

  void get_list() { 
    struct Node* ptr;
    ptr = head;
    while(ptr != NULL) { 
      cout<< ptr->number <<" "; 
      ptr = ptr->next; 
      } 
    };

  int get_index(int idx){
    struct Node* ptr;
    ptr = head;
    int count = 0;
    while (count < idx)
    {
      ptr = ptr->next;
      count++;
    }
    return ptr->number;
  }

};
