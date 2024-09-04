//Напишите короткую программу, которая запрашивает рост в дюймах и преобразует их в футы и дюймы.
//Программа должна использовать символ подчеркивания для обозначения позиции, где будет производиться ввод.
//Для представления коэффициента преобразования используйте символьную константу const

#include <iostream>

const int InchesInFoot = 12;

int convertHeight(int);

int main(){

    using namespace std;

    cout<< "Enter your height in inches:__\b\b";
    int height;
    cin>>height;

    int foot = height/InchesInFoot;
    int inches = height % InchesInFoot;

    cout<<"Your height is "<<foot <<" foot and "<<inches<< " inches";
    return 0;
}
