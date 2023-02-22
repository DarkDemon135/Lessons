
#include <iostream>

void input_n() {
    int n;

    std::cout << "Введите число от 10 до 15\n";
    std::cin >> n;
    
}

void print_n() {

    int n = input_n;

    if (n >= 10 && n <= 15) {
        std::cout << n << "\n";
    }else {
        std::cout << "Число должно быть от 10 до 15";
    }
}

int main() {
    print_n();

}