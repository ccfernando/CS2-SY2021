 #include <iostream>

 using namespace std;
 int main() {
   int t, x, sum = 0;
   cin >> t;
   for (x = 1; x <= t; x++) {
     cout << x << " ";
     if (x % 2 == 0)
       sum += x;
   }
   cout << endl;
   cout << "The sum is " << sum;
   return 0;
 }
