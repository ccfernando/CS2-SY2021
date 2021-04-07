/*
this program demonstrate that changes to a function parameter
have no effect on the original argument.
*/
#include <iostream>

using namespace std;
//function prototype
void changeMe(int);
int main() {
  int number = 13;
  //Display the value in number.
  cout << "Number is " << number << endl;
  //call changeMe, passing the value in number as argument
  changeMe(number);
  //display the value in number again
  cout << "Now back in the main again, the value of";
  cout << "number is " << number << endl;
  return 0;
}
void changeMe(int value) {
  //change the value to zero;
  value = 0;
  //display the value
  cout << "Now the value is " << value << endl;
}
