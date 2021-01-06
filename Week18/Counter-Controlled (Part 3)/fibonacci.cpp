 #include <iostream>

 using namespace std;
 int main() {
   int num1 = 0, num2 = 1, num3 = 0, t, x, temp = 0, sum = 0;
   cin >> t;
   for (x = 1; x <= t; x++) {
     cout << num3 << " ";
     num3 = num1 + num2;
     temp = num1;
     num2 = temp;
     num1 = num3;
   }
   return 0;
 }
