//Напишите программу, которая запрашивает  широту в градусах, минутах и секундах, после чего отображает широту в десятичном формате.
//В одной минуте 60 угловых секунд, а в одном градусе 60 угловых минут;
//представьте эти значения с помощью символических констант. Для каждого вводимого значения должна использоваться отдельная переменная.

#include <iostream>

using namespace std;

const int MinutesInDegree = 60;
const int SecondsInMinute = 60;

int main(){
    cout<<"Enter a latitude in degrees, minutes, and seconds\n";

    cout<<"First, enter the degrees:";
    double degrees;
    cin>>degrees;

    cout<<"Next, enter the minutes of arc:";
    double minutes;
    cin>>minutes;

    cout<<"Last, enter the seconds of arc:";
    double seconds;
    cin>>seconds;

    double resultDegree= degrees + (minutes/MinutesInDegree) + (seconds/MinutesInDegree/SecondsInMinute);
    cout<<degrees<<" degrees, "<<minutes<<" minutes, "<<" seconds ="<<resultDegree<<" degrees"<< endl;
;
}
