#include <iostream>

int main() {
    std::string name;  // Имя пользователя
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name;  // Вывод приветствия
    return 0;
}
