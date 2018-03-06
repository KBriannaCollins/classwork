#include <iostream>
#include <string>

#include "Arr.h"

using namespace std;

int main()
{
	Arr<int> intArr;
	T one, two, three, value;
	int index;

	cout << "The default array is:\n" << intArr << "\n";

	//filling in the second arr
	cout << "Type the three integers you want for the array.\n";
	cin >> one >> two >> three;
	Arr<int> intArr2(one, two, three);
	cout << "Your array is:\n" << intArr2 << "\n";

	//get functions
	cout << intArr2.GetFirst() << "\n";
	cout << intArr2.GetSecond() << "\n";
	cout << intArr2.GetThird() << "\n";

	//set value
	cout << "Type the number of the value you want to change and what value to change to.\n";
	cin >> index >> value;
	index = index - 1;
	intArr2.SetValue(index, value);
	cout << "The array after the change is:\n" << intArr2 << "\n";

	//max and min
	cout << "The maximum is: " << intArr2.find_max() << "\n";
	cout << "The minimum is: " << intArr2.find_min() << "\n";

	//sorting
	cout << "The array in ascending order:\n" << intArr2.sort_ascending() << "\n";
	cout << "The array in descending order:\n" << intArr2.sort_descending() << "\n";

	Arr<string> strArr;
	//string is going to be most of the same but I want to minimize all of the code

	return 0;
}
