#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){

    LinkedList LL;
    LL.add(1);
    LL.add(2);
    LL.add(4);
    LL.add(6);
    LL.add(9);
    // cout<<LL.get_length();
    LL.pop_nth(4);

    LinkedList LL2;
    LL2.add(7);
    LL2.add(3);
    LL2.add(3);
    LL2.add(6);
    LL2.add(10);


    

    LL.print();
    return 0;
};  