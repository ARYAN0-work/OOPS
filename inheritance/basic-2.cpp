#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(){

    }
};
// agar koi class banaoge toh pehle base class call hogi and then derived one 

class Student : public Person{ 
public:// pehle ye person class ko call then student banega  
    int rollno;
    
    void getInfo(){// actually ab voh isis ki prop ban chucki hai 
        cout<< "name: " <<name <<endl;// humne koi name age and rollno nhi banaya hai person me tabhi no eror bcz of inheritance
        cout<< "age: " <<age <<endl;
        cout<< "rollno: " <<rollno<<endl;
    }

};

int main() {
   Student s1;
   s1.name = "rahul";
   s1.age = 21;
   s1.rollno= 1234;

   s1.getInfo();
   return 0;
}