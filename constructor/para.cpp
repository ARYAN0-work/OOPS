#include<iostream>
#include <string>
using namespace std;

class Teacher{

public://// ye ek class nhi ek fn hai aur iska return type kuch bhi nhi hai

// non-parmeterized constructor 
//   Teacher() {
//    dept= "computer scenice";
//}


// what if i can assign values in one line thats when para constrcutor come 
   Teacher(string n, string d, string s, double sal) {
    name=n;
    dept=d;
    subject=s;
    salary=sal;
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

