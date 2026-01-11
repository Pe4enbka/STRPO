#include <iostream>

// Программа выводит приветствие пользователю
int main()
{
    std::string name; // переменная побита
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name; // выводим приветствие
    return 0;
}
