//Напишите программу, которая выдает запрос на ввод значений часов и минут.
//Функция main() должна передать эти два значения функции, имеющий тип
//void, которая отобразит эти два значения в виде часов и минут "9:28"

#include <iostream>

using namespace std;

int main(){
    cout<<"Enter the number of hours: ";
    int hours;
    cin>>hours;
    cout<<"Enter the number of minutes: ";
    int minutes;
    cin>>minutes;
    cout<<"Time: "<< hours<<":"<<minutes; 
}