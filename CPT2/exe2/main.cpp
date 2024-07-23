//Напишите программу, которая выдает запрос на ввод расстояния в фарлонгах и преобразует его в ярды. (Один фарлонг равен 220 ярдам, или 201168 метрам.)

#include <iostream>

int farlongsToYards(int);


int main(){

    using std::cout;
    using std::cin;
    using std::endl;

    int length;
    cout<< "Enter the length in farlongs:";
    cin >> length;
    cout << endl;
    cout << "Lenght is: " << farlongsToYards(length) << " yards.";


};

int farlongsToYards(int farlongs){
    return farlongs*220;
};
