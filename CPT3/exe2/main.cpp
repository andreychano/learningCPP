//Напишите короткую программу, которая запрашивает рост в футах и дюймах и вес в футнах.
//(для хранения этой информации используйте три переменных)
//Программа должна выдать ИМТ.Сначала преобразуйте рост в дюймах в рост в метрах, умножив на 0.0254
//Далее преобразуйте массу в фунтах в массу в килограммах, разделив на 2.2. После рассчитайте ИМТ
//разделив массу в килограммах на рост в метрах. Для представления различных коэффициентов используйте символические константы.


#include <iostream>

constexpr int InchesInFoot = 12;
constexpr double InchesToMeter = 0.0254;
constexpr double PoundsInKilo = 2.2;

int convertHeight(int);

int main(){

    using namespace std;

    cout<< "Enter your height in foots and inches\n";

    cout<< "Enter your height in foots:_\b";
    int foots;
    cin>>foots;

    cout<< "Enter your height in inches:_\b";
    int inches;
    cin>>inches;

    cout<< "Enter your weight in pounds:__\b\b";
    int weight;
    cin>>weight;

    double heightInMeters = ((foots * InchesInFoot) + inches)* InchesToMeter;
    double weightInKilos = weight*PoundsInKilo;

    double BMI = weightInKilos/(heightInMeters*heightInMeters);


    cout<<"Your BMI is:"<<BMI;
    return 0;
}
