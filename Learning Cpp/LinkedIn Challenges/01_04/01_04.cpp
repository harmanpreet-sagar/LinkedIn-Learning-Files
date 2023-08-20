// ? Take input of user's name and then display a message using said name.

#include <iostream>
#include <string>

using namespace std;

int main(){
  string name;
  cout << "Please enter your name: ";
  cin >> name;
  cout << "Hello " << name << "!" << endl;
  return 0;
}