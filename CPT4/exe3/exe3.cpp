#include <iostream>
#include <cstring>


int main() {

	using namespace std;

	char firstName[20];
	char lastName[20];

	cout << "Enter name: ";
		cin >> firstName;
		cout << "Enter last name: ";
		cin >> lastName;

		char fullName[50];
		char comma[3] = ", ";

		strcpy_s(fullName, firstName);
		strcat_s(fullName, comma);
		strcat_s(fullName, lastName);

		cout << endl << fullName;
}