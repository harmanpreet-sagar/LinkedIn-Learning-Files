// Learning C++ 
// Exercise 01_03
// Hello World

#include <iostream>

// I can use the below line at the beginning of the code in order to enable me
// to stop writing std:: again and again for all members of the standard library.
// using namespace std;

int main(){
  // std indicates that the thing after the :: is a member of the standard library.
  // :: is a scope resolution operator
  // cout means character out.
  // std::endl adds a new line.
  // returning 0 means that there were no errors that came up in the program. 
  std::cout << "Hi There!" << std::endl;
  return 0;
}
