//Напишите программу которая запрашивает и отображает информацию, как показано в следующем примере ввода
// What is your first name? Bety Sue
// What is your last name? Yewe
// What letter grade do you deserve? B
// What is your age? 22
// Name: Yewe, Betty Sue
// Grade: C
// Age: 22
//
// Программа должна принимать имена, состоящие больше чем из одного словаю
// Программа должна уменьшать grade на одну градацию.Предполагается, что пользователь может ввести только A, B или C.

#include <iostream>

const int ArrSize = 20;

int main(){

    std::cout<< "What is your first name? ";
    char firstName[ArrSize];
    std::cin.getline(firstName,ArrSize);
    std::cout<<std::endl;


    std::cout<< "What is your last name? ";
    char lastName[ArrSize];
    std::cin.getline(lastName,ArrSize);
    std::cout<<std::endl;

    std::cout<< "What letter grade do you deserve? ";
    char grade;
    std::cin>>grade;
    std::cout<<std::endl;

    std::cout<< "What is your age? ";
    int age;
    std::cin>>age;
    std::cout<<std::endl;

    std::cout<<"Name: " << lastName << ", "<<firstName<< std::endl;
    std::cout << "Grade: "; std::cout.put(grade+1) << std::endl;
    std::cout << "Age: "<< age << std::endl;


return 0;
};
