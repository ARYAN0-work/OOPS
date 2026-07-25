#include<iostream>
#include <string>
using namespace std;

class Teacher{

public:

// what if i can assign values in one line thats when para constrcutor come 
   Teacher(string name, string dept, string subject, double salary) {
    this->name=name;
    name=name;// ab confusion ho rha ki kya obj hai kya parameter hai that why we use this
    this->dept=dept;//[obj ka dept = constructor ka para dept ]
    this->subject=subject;
    this->salary=salary;
}


private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
    dept = newDept;
    }

    void getInfo(){
        cout<< "name:"<<name<<endl;
        cout<< "subject:"<<subject<<endl;
    }
};


int main(){
    Teacher t1("Aryan","CS","C++",25000);
    t1.getInfo();
   
    return 0;
}

