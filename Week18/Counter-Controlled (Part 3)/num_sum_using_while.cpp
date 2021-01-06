 #include <iostream>

 using namespace std;
 int main() {
   int t, x = 1, sum = 0;
   cin >> t;
   while (x <= t) {
     cout << x << " ";
     if (x % 2 == 0)
       sum += x;
     x++;
   }
   cout << endl;
   cout << "The sum is " << sum;
   return 0;
 }
