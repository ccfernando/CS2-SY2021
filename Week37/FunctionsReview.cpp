#include <iostream>
using namespace std;

int add(int num1, int num2);
void get_val();

int main() {
  get_val();
}

//addition function
int add(int num1, int num2) {
  int sum = num1 + num2;
  return sum;
}

//get values
void get_val() {
  int num1, num2;
  cout << "Enter num1:" << endl;
  cin >> num1;
  cout << "Enter num2:" << endl;
  cin >> num2;
  cout << add(num1, num2);
}
