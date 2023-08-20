// Learning C++ 
// Exercise 02_05
// Preprocessor directives

#include <iostream>
#include <string>
#include <cstdint>

// This is a constant. Essentially whenever we use CAPACITY in the code, it will
// be replaced by 5000.
#define CAPACITY 5000
//#define DEBUG // This is a directive and doesn't need to be initialized if only being used in a ifdef directive.

using namespace std;

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
    
// Bottom will run if DEBUG is defined.
#ifdef DEBUG
    cout << "[About to perform the addition]" << endl;
#endif

    large += small; // Shorthand for large = large + small
    cout << "The large integer is " << large << endl;
    return (0);
}
