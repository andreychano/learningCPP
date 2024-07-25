

#include <iostream>
#include <string>

struct CandyBar {
	std::string name;
	double mass;
	int calories;
};


int main()
{
	CandyBar snack[3] = { {"Mocha Munch",2.3,350}, { "Mars",0.3,560 }, { "Snickers",0.095,300 } };


	std::cout << "Name: " << snack[0].name << std::endl << "Mass: " << snack[0].mass << std::endl << "Calories: " << snack[0].calories << std::endl;

	std::cout << "Name: " << snack[1].name << std::endl << "Mass: " << snack[1].mass << std::endl << "Calories: " << snack[1].calories << std::endl;
	std::cout << "Name: " << snack[2].name << std::endl << "Mass: " << snack[2].mass << std::endl << "Calories: " << snack[2].calories << std::endl;

}

