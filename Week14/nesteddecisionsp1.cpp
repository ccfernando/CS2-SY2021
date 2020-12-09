 #include <iostream>

 using namespace std;

 int main() {

   int num;
   //user input
   cout << "Enter a positive integer: ";
   cin >> num;

   //outer if statement
   if (num > 0) {
     //inner if statement
     if (num % 2 == 0) {
       cout << num << " is even.";
     } else {
       cout << num << " is odd.";
     }
   } else {
     //inner if statement
     if (num == 0) {
       cout << num << " is neither odd nor even.";
     } else {
       cout << "That is not a positive integer";
     }
   }

   return 0;
 }
