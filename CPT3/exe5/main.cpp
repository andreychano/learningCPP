//  Напишите программу которая запрашивает текущую численность населения Земли и
//текущую численность населения США. Сохраните эту информацию в переменных типа long long.
//В качестве результата программа должна отображать процентное соотношение численности населения
//США и всего мира.

#include <cmath>
#include <iostream>

int main(){
    std::cout<<"Enter the Wordld's population: ";
    long long worldPopulation;
    std::cin>>worldPopulation;

    long long populationUSA = 310783781;

    long double resultOfComparsion = ( double(populationUSA)/ double(worldPopulation)*100);

    std::cout<<"The population of the US is "<<resultOfComparsion<<"% of the world population.";

}
