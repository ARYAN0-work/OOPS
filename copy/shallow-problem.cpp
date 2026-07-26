#include<iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
   // double cgpa; dia is in the copy  
      double*cgpaPtr;// abhi khi point nhi karta 
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;// ab heap me 
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){// this is also write 
        this->name=obj.name;
        this->cgpaPtr=obj.cgpaPtr;
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
   s1.getInfo();// after print the the output will be 

/**  this is the problemn with shaloow copy hum toh s2 ptr change kar rhe the but s1 ptr change ho gya copy in photo
name: rahul Kumar
cgpa: 8.9
name: rahul Kumar
cgpa: 9.2
 */

   return 0;
}

