#include <iostream>
#include <string>
using namespace std;

void fun() {
    static int x = 0;// init statment -1 run

    cout << "x : " << x << endl;
    x++;
}

int main() {
    fun();
    fun();
    fun();
// it will print x =0,1,2 bcz is baar x destroy nhi ho rha 
    return 0;
}