#include <iostream>

using namespace std;
int accept_number();
bool ispositive(int);
void display(int);
int main() {
  int x;
  x = accept_number();
  if (ispositive(x))
    display(x);
  else
    cout << "You entered a negative number.";
  return 0;
}
int accept_number() {
  int num;
  cout << "Please enter a positive number: ";
  cin >> num;
  return num;
}
bool ispositive(int q) {
  if (q > 0)
    return true;
  return false;
}
void display(int j) {
  cout << "The positive number you entered is " << j << ".";
}
