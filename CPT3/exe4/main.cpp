//Напишите программу которая запрашивает количество секунд в виде целого
//значения(исп. тип long или long long, если последний доступен) и затем
//отображает эквавалентное значение в сутках, часах, минутах и секундах.

#include <iostream>

const int HoursInDay = 24;
const int MinutesInHour = 60;
const int SecondsInMinute = 60;

int main(){
    std::cout<<"Enter the number of seconds: ";
    int enteredSeconds;
    std::cin>>enteredSeconds;

    int days = enteredSeconds/SecondsInMinute/MinutesInHour/HoursInDay;
    int hours = (enteredSeconds/SecondsInMinute/MinutesInHour) - days * HoursInDay;
    int minutes= (enteredSeconds/SecondsInMinute) - (days * HoursInDay*MinutesInHour) - (hours * MinutesInHour);
    int seconds = (enteredSeconds)-(days * HoursInDay*MinutesInHour*SecondsInMinute) - (hours * MinutesInHour*SecondsInMinute)-minutes*SecondsInMinute;
    std::cout<<enteredSeconds<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds.";

    return 0;
}


//Можно переписать лучше
