

#include <iostream>
#include <string>

struct CandyBar {
	std::string name;
	double mass;
	int calories;
};


int main()
{
	CandyBar snack = { "Mocha Munch",2.3,350 };

	std::cout << "Name: " << snack.name << std::endl << "Mass: " << snack.mass << std::endl << "Calories: " << snack.calories;

}

