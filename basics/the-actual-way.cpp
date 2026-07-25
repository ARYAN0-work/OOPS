#include<iostream>
#include <string>
using namespace std;

class Teacher{

private:
    double salary;// salry genrally accounts vali team k pass rehta hai

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
    dept = newDept;
    }

};


int main(){
    Teacher t1;
    t1.name = "aryan";
    t1.subject="Cs";
    t1.dept="computer sceince";
   // t1.salary= 25000; it will show error

    cout<<t1.name<<endl;
    return 0;
}

