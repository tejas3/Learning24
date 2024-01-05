#include <iostream>
using namespace std;

int Sum(int x, int y)
{
   return x + y;
}

void print()
{
   cout << "working successfully";
}

void display()
{
   cout << "new function";
}

int main()
{
   // sum function
   int sumValue = Sum(1, 2);
   cout << sumValue << endl;
   cout << "Hello World";

   print();
   display();
}
