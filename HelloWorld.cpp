#include <iostream>
using namespace std;

int Sum(int x, int y)
{
	return x+y;
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
   cout << "Hello World";
}
