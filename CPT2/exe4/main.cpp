//Напишите программу, которая предлагает пользователю ввести свой возраст.
//Затем программа должна отобразить возраст в месяцах
#include <iostream>
int main(){
    using namespace std;

    cout<< "Enter your age:__\b\b";
    int age;
    cin>> age;
    cout<<"Your age in months is " << age*12 << ".";



    return 0;
}