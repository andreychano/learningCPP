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

		strcpy(fullName, firstName);
		strcat(fullName, comma);
		strcat(fullName, lastName);

		cout << endl << fullName;
}
