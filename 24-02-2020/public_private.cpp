#include <iostream>

using namespace std;

class MyClass{
    private:
        void my_private_method();
    public:
        void my_public_method();
};

void MyClass::my_private_method(){
    char msg[8] = "Private";
    cout << msg << endl;
};

void MyClass::my_public_method(){
    char msg[7] = "Public";
    cout << msg << ':' <<  sizeof(msg) << endl;
    my_private_method();
};

int main(){
    MyClass obj;
    obj = MyClass();
    obj.my_public_method();
    return 0;
};