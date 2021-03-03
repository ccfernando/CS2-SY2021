#include <iostream>

using namespace std;
int main() {
  //size of array 
  const int Size = 20;
  
  //array with employee IDs sorted in ascending order. 
  int id[Size] = {101, 104, 142, 189, 195, 199, 201, 209, 222, 234, 289, 298, 312, 345, 386, 397, 417, 449, 512,600};
  
  int empID; // to hold the target employee ID 
  
  int first = 0, last = Size - 1, mid;
  bool found = false;
  cout << "Enter the employee ID you wish to search for: ";
  cin >> empID;
  
  while ((first <= last) && !found) {
    mid = (first + last) / 2; // calculate midpoint 
    if (id[mid] == empID) {
      found = true;
    } else if (id[mid] > empID)
      last = mid - 1;
    else
      first = mid + 1;
  }
  
  if (found)
    cout << "You are a legitimate employee, Welcome!" << endl;
  else
    cout << "Sorry, you are not an employee here." << endl;
  return 0;

}
