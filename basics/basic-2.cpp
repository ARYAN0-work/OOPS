#include<iostream>
#include <string>
using namespace std;

class Teacher{
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept){
    dept = newDept;
    }

};


int main(){
    Teacher t1;// now we want to assign values to teacher 1 use . operator 
    t1.name = "aryan";
    t1.subject="Cs";
    t1.dept="computer sceince";
    t1.salary= 25000;

    cout<<t1.name<<endl;// it will give an error =>private memeber
    return 0;
}

