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
    }// ye aapne aap tph call hote nhi hum karte hai toh ab kya use below 
};


class Student : public Person{ 
public:
    int rollno;
    
    // explicitly hum ese parent class k onstuctor ko call lga sakte hai from our own child constructor
    Student(string name, int age, int rollno):Person( name, age){
        this:rollno= rollno;
    }

    void getInfo(){
        cout<< "name: " <<name <<endl;
        cout<< "age: " <<age <<endl;
        cout<< "rollno: " <<rollno<<endl;
    }

};

int main() {
   Student s1("rahul",21,1234)

   s1.getInfo();
   return 0;
}

// ye publ;ic inheriatance hai 