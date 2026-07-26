#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{ //: access modifier[diff types of mode] base class
    //name, age, rollno -> ye toh same hai joh peroson k pass jai
}

int main() {

}