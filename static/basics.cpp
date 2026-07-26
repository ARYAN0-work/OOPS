#include <iostream>
#include <string>
using namespace std;

void fun() {
    int x = 0;

    cout << "x : " << x << endl;
    x++;
}

int main() {
    fun();
    fun();
    fun();
// it will print x =0 -> 3 times
    return 0;
}