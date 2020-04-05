#include<iostream>
#include<string>
using namespace std;

int FunctionToDebug(int a, int b) {
    int sum = a + b;
    return sum;
}

int main(int argc, const char** argv) {
    cout<< "Hello World.\n" ;
    int sum = FunctionToDebug(2, 3);
    cout<< "Sum of 2 + 3 = " << sum << ".\n" << endl;
    return 0;
}