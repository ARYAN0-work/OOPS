#include<iostream>
#include <string>
using namespace std;

class Teacher{

public://// ye ek class nhi ek fn hai aur iska return type kuch bhi nhi hai
   Teacher() {
    cout<<"Hi, i am a constructor";
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

    void setSalery(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }

};


int main(){
    Teacher t1;// is baar jub hum ye create karnege toh is baar humne apna constructor likha hua hai default vala constructor  run nhi hoga aur ye apne aao hi excute ho jayega 
    Teacher t2;// ab do baar line print hogi 
    t1.name = "aryan";
    t1.subject="Cs";
    t1.dept="computer sceince";

    t1.setSalery(25000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;

    return 0;
}

