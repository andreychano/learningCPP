// Напишите программу которая использует три определяемых пользователем функции(включая main()) и генерирует следующий вывод
//Three blind mice
//Three blind mice
//See how they run
//See how they run
//Одна функция вызываемая два раза, должна генерировать первые две строки,
//а другая, так же вызываемая два раза - оставшиеся строки

#include <iostream>

void func1(void);
void func2(void);

int main(){

    func1();
    func1();


    func2();
    func2();
    return 0;
}

void func1(void){
    std::cout <<"Three blind mice\n";
};

void func2(void){
    std::cout <<"See how they run\n";
};