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

// copy constructor
Teacher(Teacher &orgObj){// take teacher obj and make pass by ref => orignal obj ki copy nhi hai orignal obj hi hai jojh changes is orignal construcctor k andar hpnge voh orignal teacher k andar hoge
  cout <<"i made cpoy custom constructor....";
    this->name =orgObj.name;
  this->dept =orgObj.dept;
  this->subject=orgObj.subject;
  this->salary=orgObj.salary;
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
    //t1.getInfo();
   
    Teacher t2(t1);// default copy constructor - invoked
    t2.getInfo();
    return 0;
}

