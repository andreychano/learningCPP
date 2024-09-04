//Напишите программу, которая запрашивает расход бензина в европейском стиле
// и преобразует его в стиль, принятый в США - число миль за галлон. Обратите внимание,
//что кроме использования других единиц измерений, принятый в США подход противоположен европейскому.
//Учтите что 100 километров соответствуют 62.14 милям, а 1 галлон составляет 3.875 литра. Таким образом,
//19 миль на галлон примерно равно 12 литров на 100 км, а 27 миль на галлон - примерно 8.7 на 100 км.


#include <iostream>
    const double MilesIn_100Kilometers = 62.14;
    const double LitresInGallon = 3.875;
int main(){
    std::cout<<"Enter the consumption of gasoline per 100 km: ";
    double gasolinePer_100Km;
    std::cin>>gasolinePer_100Km;

    double americanStyleMilesPerGallon = MilesIn_100Kilometers/(gasolinePer_100Km/LitresInGallon);


    std::cout<<"The consumption gasoline in american style is "<< americanStyleMilesPerGallon<<"miles per gallon";
}
