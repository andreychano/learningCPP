//Напишите программу, которая приглашает пользователя ввести три результата забега на 40 метров
//и затем отображает эти значения и их среднее. Для хранения данных применяйте объект array.

#include <iostream>
#include <array>

int main(){
    std::cout<<"Enter the results of 3 sprints: \n";
    std::array<double,3> sprintResult;

    std::cout<<"First sprint:";
    std::cin>>sprintResult[0];

    std::cout<<"First sprint:";
    std::cin>>sprintResult[1];
    std::cout<<"First sprint:";
    std::cin>>sprintResult[2];
    double sizeofArr= double(sizeof(sprintResult))/double((sizeof(sprintResult[0])));
    //std::cout<<sizeofArr<<std::endl;
    double average = (sprintResult[0]+sprintResult[1]+sprintResult[2]) /sizeofArr;
    std::cout<<"The average time is: "<< average;

}
