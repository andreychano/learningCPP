
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string firstName;
	string lastName;
	string comma = ", ";
	string firstLastName;

	cout << "Enter first name: ";
	cin >> firstName;
	cout  << "Enter last name: ";
	cin >> lastName;

	firstLastName = firstName + comma + lastName;


	cout << "Here's information in a single string: " << firstLastName << endl;
	return 0;

}

