#include <iostream>
using namespace std;

int Sum(int x, int y)
{
   return x + y;
}

int factorial(int num)
{
   if (num == 0 || num == 1)
      return 1;
   return num * factorial(num - 1);
}
int remainder(int x, int y){

   return x%y;
}
int main()
{
   // sum function
   int sumValue = Sum(1, 2);
   cout << sumValue << endl;

   cout << "Hello World" << endl;
   cout << factorial(5) << endl;

   int remainderValue = remainder(1,2);
   cout << remainderValue << endl;
   cout << "Hello World";

}
