#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    void getInfo() {
        cout << "parent class\n";
    }
};

class Child : public Parent {
public:
    void getInfo() {
        cout << "child class\n";
    }
};

int main() {
    //Child c1;
    //c1.getInfo();// ye child class ka fn parent class k fn ko override karta hai

    parent p1;// parent class now 
    p1.getInfo();

    return 0;
}