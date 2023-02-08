#include<iostream>
#include<string>
using namespace std;
class Calculator {
    float a, b;
    public:
        void result() {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
        }
        float plus() {
            return a + b;
        }
        float minus() {
            return a - b;
        }
        float mult() {
            return a * b;
        }
        float div() {
            if (b == 0){
                cout << "Ошибка, на ноль делить недьзя!";
                return 0;
            }
            else{
                return a / b;
            }
        }
};

int main () {
    int ch;
    Calculator c;
    cout << "Введите 1 - для сложение(+)" <<
            "\nВведите 2 для вычитание(-)" <<
            "\nВведите 3 для умножения (*)" <<
            "\nВведите 4 для деления (/)" <<
            "\nВведите 0 для выхода";
        do
        {
        cout << "\nВаш выбор?: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            c.result();    
            cout << "Ответ: " <<
                     c.plus() << endl;
            break;
        case 2:
            c.result();
            cout << "Ответ: " <<
                     c.minus() << endl;
            break;
        case 3:
            c.result();
            cout << "Ответ: " <<
                     c.mult() << endl;
            break;
        case 4:
            c.result();
            cout << "Ответ: " <<
                     c.div() << endl;
            break;
        }
         
    }
    while (ch >= 1 && ch <= 4);
    return 0;
}