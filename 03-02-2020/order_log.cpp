/*
You run an e-commerce website and want to record the last N order ids in 
a log. Implement a data structure to accomplish this, with the following 
API:

record(order_id): adds the order_id to the log
get_last(i): gets the ith last element from the log. i is guaranteed to 
be smaller than or equal to N.
You should be as efficient with time and space as possible.
*/

#include <iostream>
#include <vector> 
using namespace std;


struct order_log
{
    int N;
    vector<string> order_ids; 

    void record(string id){
        if (order_ids.size() >= N){
            order_ids.erase(order_ids.begin());
        };
            order_ids.push_back(id);
    };

    void get_last(int i){
        cout << order_ids[order_ids.size() - i]<<endl;
    };
    
};


int main(){

    order_log ol;
    ol.N = 5;

    ol.record("1");
    ol.record("6");
    ol.record("3");
    ol.record("2");
    ol.record("3");
    ol.record("7");

    
    ol.get_last(3);

    cout<<ol.order_ids.size()<<endl;
    return 0;
};