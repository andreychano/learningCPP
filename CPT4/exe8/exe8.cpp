ч﻿
#include <iostream>
#include <string>

struct pizzaByCompany {
    std::string companyName;
    int pizzaDiameter;
    int pizzaMass;
};

int main()
{
    using namespace std;

    pizzaByCompany* pizzaCompany = new pizzaByCompany;



    cout << endl << "Set the pizza diameter.\n" << "Diameter:";
    cin >> pizzaCompany->pizzaDiameter;

    cout << "Greetings! Set the name of the company\n" << "Name:";
    cin >> pizzaCompany->companyName;


    cout << endl << "Set the pizza mass.\n" << "Mass:";
    cin >> pizzaCompany->pizzaMass;

    cout << endl << "Verify the data:\n" << "Name: " << pizzaCompany->companyName << endl << "Diameter: " << pizzaCompany->pizzaDiameter << endl << "Mass: " << pizzaCompany->pizzaMass << endl;

    delete pizzaCompany;


    return 0;

}
