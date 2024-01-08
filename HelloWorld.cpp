#include <iostream>
using namespace std;

int Sum(int x, int y)
{
	return x+y;
}
int remainder(int x, int y){
   return x%y;
}

void multiply ()
{
   int x=3;
   int y=4;
   cout<<(x*y)<<endl;
}

int main()
{
   // sum function
   int sumValue = Sum(1,2);
   cout << sumValue << endl;
   int remainderValue = remainder(1,2);
   cout << remainderValue << endl;
   multiply();
   cout << "Hello World";
}
