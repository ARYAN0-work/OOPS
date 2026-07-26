#include<iostream>
#include <string>
using namespace std;

class Student{
public:
      double*cgpaPtr;
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;// ab heap me 
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){// this is also write 
        this->name=obj.name;
        cgpa Ptr = new double;
        *cgpaPtr=*obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
    }
};


int main(){
    Student s1("rahul Kumar",8.9);
    Student s2(s1);// nha kumar
    s1.getInfo();
    *(s2.cgpaPtr)=9.2;
    s1.name = "neha" 
    s1.getInfo();// after print the the output will be 

   return 0;
}

// ab neha ki 9.2 and rahul ki 8.9 chnage in 32 , 10 , 11