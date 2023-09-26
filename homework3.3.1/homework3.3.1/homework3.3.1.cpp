

#include <iostream>


class Calculator {
public:
    double num1;
    double num2;

    double add(double num1, double num2) {
        double num3 = num1 + num2;
        std::cout << "num1 + num2 = " << num3 << "\n";
        return num3;
}
    double multiply(double num1, double num2) {
        double num3 = num1 * num2;
        std::cout << "num1 * num2 = " << num3 << "\n";
        return num3;
    }
    double subtract_1_2(double num1, double num2) {
        double num3 = num1 - num2;
        std::cout << "num1 - num2 = " << num1 - num2 << "\n";
        return num3;
    }
    double subtract_2_1(double num1, double num2) {
        double num3 = num2 - num1;
        std::cout << "num2 - num1 = " << num3 << "\n";
        return num3;
    }
    double divide_1_2(double num1, double num2) {
        double num3 = num1 / num2;
        std::cout << "num1 / num2 = " << num3 << "\n";
        return num3;
    }
    double divide_2_1(double num1, double num2) {
        double num3 = num2 / num1;
        std::cout << "num2 / num1 = " << num3 << "\n";
        return num3;
    }
    bool set_num1(double num1) {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        this->num1 = num1;
        if (num1 == 0) {
            std::cout << "\nНеверный ввод!" << "\n";
            this->set_num1(num1);
            return false;
        }
        else return true;
    }
    bool set_num2(double num2) {
        std::cout << "Введите num2: ";
        std::cin >> num2;
        this->num2 = num2;
        if (num2 == 0) {
            std::cout << "\nНеверный ввод!" << "\n";
            this->set_num2(num2);
            return false;
        }
        return true;
    }
};



int main()
{
    setlocale(LC_ALL, "Russian");
    Calculator calc;
    calc.num1 = 0;
    calc.num2 = 0;
    calc.set_num1(calc.num1);
    calc.set_num2(calc.num2);
    calc.add(calc.num1, calc.num2);
    calc.multiply(calc.num1, calc.num2);
    calc.subtract_1_2(calc.num1, calc.num2);
    calc.subtract_2_1(calc.num1, calc.num2);
    calc.divide_1_2(calc.num1, calc.num2);
    calc.divide_2_1(calc.num1, calc.num2);
    return 0;
}

