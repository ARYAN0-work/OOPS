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

    // setter -> private values ko set karna 
    void setSalery(double s){
        salary = s;
    }

    // getter -> priavte fn ki values get karne k liye use karte hai
    double getSalary(){
        return salary;
    }
// now we want to change salary so make fn and make it public
};


int main(){
    Teacher t1;
    t1.name = "aryan";
    t1.subject="Cs";
    t1.dept="computer sceince";
   // t1.salary= 25000; it will show error
    t1.setSalery(25000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;

    cout<<t1.name<<endl;
    return 0;
}

