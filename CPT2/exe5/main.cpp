//Напишите программу, в которой функция main() вызывает определяемую
//пользователем функцию, принимающую в качестве аргумента значение температуры
// по Цельсию и возвращающую эквивалентное значение температуры по Фаренгейту
//Программа должна выдать запрос на ввод значения по Цельсию

#include <iostream>
using namespace std;
int CelsiusToFahrenheit(int);

int main(){

    cout<<"Please enter a Celsius value: ";
    int value;
    cin>>value;
    cout<<value<< " degrees Celsius is "<<CelsiusToFahrenheit(value)<<" degrees Fahrenheit.";

    return 0;
}
int CelsiusToFahrenheit(int degrees){
    return 1.8*degrees+32;
}