 #include <iostream>

 using namespace std;
 int main() {
   int p = 0, n = 0, z = 0, num;
   for (int x = 1; x <= 5; x++) {
     cin >> num;
     if (num < 0)
       n++;
     else if (num > 0)
       p++;
     else
       z++;
   }
   cout << "Total positive Number: " << p << endl;
   cout << "Total negative Number: " << n << endl;
   cout << "Total of zeros: " << z << endl;
   return 0;
 }
