
#include <iostream>
#include <string>

struct pizzaByCompany{
    std::string companyName;
    int pizzaDiameter;
    int pizzaMass;
};

int main()
{
    using namespace std;
    
    pizzaByCompany company_1;

    cout << "Greetings! Set the name of the company\n" << "Name:";
    cin >> company_1.companyName;

    cout << endl<< "Set the pizza diameter.\n" << "Diameter:";
    cin >> company_1.pizzaDiameter;
    cout << endl << "Set the pizza mass.\n" << "Mass:";
    cin >> company_1.pizzaMass;

    cout << endl << "Verify the data:\n" << "Name: " << company_1.companyName << endl << "Diameter: " << company_1.pizzaDiameter << endl << "Mass: " << company_1.pizzaMass << endl;

   

    return 0;

}

