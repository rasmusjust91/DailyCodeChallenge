#include <iostream>
using namespace std;

struct Node
{
    int number;
    Node* node_pointer;
};

class LinkedList {
    private:
        
    Node *tail, *head;
    int length;
    
    public:
    LinkedList(){
        tail = nullptr;
        head = nullptr;
        length = 0;
    };

    void add(int n){

            Node *new_node = new Node;
            new_node->number = n;
            new_node->node_pointer = nullptr;

            if (head == nullptr) {
                head = new_node;
                tail = new_node;
            } else {
                head->node_pointer = new_node;
                head = head->node_pointer;
            }
            length++;
        };

    void pop_nth(int n){
        Node* tmp = tail;

        if (n==0){
            delete tail;
            tail = tmp->node_pointer;
        }
        else if (n==length){
            
            while (tmp->node_pointer != head){
                tmp = tmp->node_pointer;
            };
            delete head;
            tmp->node_pointer=nullptr;
            head = tmp;
        }
        else {
            Node* tmp_del;
            int i = 0;
            while (i < n-1){
                tmp = tmp->node_pointer;
                i++;
            };
            tmp_del = tmp->node_pointer;
            tmp->node_pointer = tmp_del->node_pointer;
            delete tmp_del;
        };
       length--;
    };


    void print(){
    
        Node * tmp = tail;    
        int count = 1;
        cout << tmp->number;
        while (tmp->node_pointer != NULL)
        {
            tmp = tmp->node_pointer;
            count++;
            cout << tmp->number;
        };
    };

    int get_length(){
        return length;
    };

    int get_head(){
        return head->number;
    };

    int get_tail(){
        return tail->number;
    };

};
