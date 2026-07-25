#include<iostream>
#include <string>
using namespace std;

class Account{

private:
   double balnce;
   string password;   


public:    
    string accountId;
    string name;

};

int main(){
    Teacher t1;// compiler will automatically call this bcz its a constructor => humne koi special constructor nhi banaya bvut comipiler ne automatialy call kar diya means automaticallu constructor bana diya 
    t1.name = "aryan";
    t1.subject="Cs";
    t1.dept="computer sceince";

    cout<<t1.name<<endl;
    return 0;
}

