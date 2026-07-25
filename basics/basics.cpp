#include<iostream>
#include <string>
using namespace std;

class Teacher{
    //propertier--->attributes  [both are same]
    string name;
    string dept;
    string subject;
    double salary;

    //methods-> fn hi likhna hai   // also kniwn as memeber fn bcz it becomes member of the above class
    void changeDept(string newDept){
    dept = newDept;
    }


};// here class will end

// thats how we can creat class seee abve
/////////


int main(){
    Teacher t1;// humara teacher t1 object ban gya
    Teacher t2;
    Teacher t3;
    Teacher t4; 
    return 0;
}


// thats how we can create object see above