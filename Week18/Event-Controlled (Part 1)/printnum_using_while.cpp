 #include <iostream>

 using namespace std;
 int main() {
   int num, sum = 0;
   cout << "Enter a number: ";
   cin >> num;
   while (sum < 100) {
     sum = sum + num;
     cout << num << " ";
     num++;
   }
   cout << "The sum of these numbers is " << sum;
   return 0;
 }
