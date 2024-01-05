#include <iostream>
using namespace std;

int Sum(int x, int y)
{
	return x+y;
}
void show(){
   cout<<"New function added";
}

int main()
{
   // sum function
   int sumValue = Sum(1,2);
   cout << sumValue << endl;
   cout << "Hello World";
   show();
}
