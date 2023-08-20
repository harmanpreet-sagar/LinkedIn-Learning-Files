// Learning C++ 
// Exercise 02_02
// Variables

#include <iostream>

using namespace std;

// Global variables.
int a, b = 5;

int main(){
    // Local variable.
    bool my_flag;
    a = 7;
    my_flag = false;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "flag = " << my_flag << endl;
    my_flag = true;
    cout << "flag = " << my_flag << endl;
    cout << "a+b = " << a+b << endl;
    cout << "b-a = " << b-a << endl;
    unsigned int positive;
    positive = b - a;
    // Displays the binary equivalent of -2. The answer displayed was 4294967294
    // which is (2^32 - 2)
    cout << "b-a (unsigned) = " << positive << endl;
    return (0);
}

// * When declaring float type numbers such as 23.0f, always include a number
// * post the decimal point and have an "f" attached with it. This will ensure
// * that the number is treated as a float and not a double.
