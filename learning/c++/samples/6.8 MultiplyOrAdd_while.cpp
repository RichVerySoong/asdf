#include <iostream>
using namespace std;

int main()
{
   char userSelection = 'm';   // initial value

   while (userSelection != 'x')
   {
	   cout << "Enter the two integers: " << endl;
	   int num1 = 0, num2 = 0;
	   cin >> num1;
	   cin >> num2;

	   cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
	   cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

	   cout << "Press x to exit(x) or any other key to recalculate" << endl;
	   cin >> userSelection;
   }

   cout << "Goodbye!" << endl;

   return 0;
}
