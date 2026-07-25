#include<iostream>
#include <string>
using namespace std;

class Account{

private:// data hiding
   double balnce;
   string password;   


public:    
    string accountId;
    string name;

    // we can't show these two 
   // double balnce;
   // string password;
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

