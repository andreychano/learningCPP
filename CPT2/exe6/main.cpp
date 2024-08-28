//Напишите программу в которой функция main() вызывает определяемую пользователем 
// функцию, принимающую в качестве аргумента рассояние в световых годах и возвращающую  
//расстояние в астрономических единицах. Программа должна выдать запрос на ввод значения
// в световых годах и вывестизначение в астрономических единицах.

#include <iostream>

using namespace std;

double LightYearToAU(double);
int main(){
    cout<<"Enter the number of light years:";
    double lightYear;
    cin>>lightYear;
    cout<<lightYear<<" light years = " << LightYearToAU(lightYear)<< " astronomical units.";
}
double LightYearToAU(double lightYear){
    return lightYear*63240;
}