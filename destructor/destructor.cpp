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

 
// destructor same name jiska bana rhe hai
~Student(){
  cout<< "Hi, I delete everything"; //aapne aap call hoga
  delete cgpaPtr;// for DMA if ye nhi kiya toh problem aayegi memo leak memo alag alag jagah pnt kar rhi hai but use 0
}


    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
    }
};


int main(){
    Student s1("rahul Kumar",8.9);
    s1.getInfo();
   return 0;
}
