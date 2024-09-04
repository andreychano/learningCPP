//Напишите программу, которая запрашивает количество миль, пройденных автомобилем,
// и количество галлонов израсходованного бензина, а затем сообщает значение количества
//миль на галлон.

#include <iostream>

int main(){
    std::cout<<"Enter the number of miles: ";
    double miles;
    std::cin>>miles;

    std::cout<<"Enter the number of gallons of gasoline used: ";
    double gallons;
    std::cin>>gallons;

    double milesPerGallon= miles/gallons;
    std::cout<<"Per one gallon of gasoline the car can drive "<<milesPerGallon<<" miles;";

    return 0;
}
