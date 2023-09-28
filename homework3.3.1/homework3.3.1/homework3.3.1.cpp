

#include <iostream>


class Calculator {
private:
    double num1;
    double num2;
public:
    double add() {
        double num3 = num1 + num2;
        return num3;
}
    double multiply() {
        double num3 = num1 * num2;
        return num3;
    }
    double subtract_1_2() {
        double num3 = num1 - num2;
        return num3;
    }
    double subtract_2_1() {
        double num3 = num2 - num1;
        return num3;
    }
    double divide_1_2() {
        double num3 = num1 / num2;
        return num3;
    }
    double divide_2_1() {
        double num3 = num2 / num1;
        return num3;
    }
    bool set_num1(double num1) {
        this->num1 = num1;
        if (num1 == 0) {
            std::cout << "\nНеверный ввод!" << "\n";
            this->set_num1(num1);
            return false;
        }
        else return true;
    }
    bool set_num2(double num2) {
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
    double num1 = 0, num2 = 0;
    std::cout << "\nВведите num1: ";
    std::cin >> num1;
    std::cout << "\nВведите num2: ";
    std::cin >> num2;
    calc.set_num1(num1);
    calc.set_num2(num2);
    std::cout << "num1 + num2 = " << calc.add() << "\n";
    std::cout << "num1 * num2 = " << calc.multiply() << "\n";
    std::cout << "num1 - num2 = " << calc.subtract_1_2() << "\n";
    std::cout << "num2 - num1 = " << calc.subtract_2_1() << "\n";
    std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
    std::cout << "num2 / num1 = " << calc.divide_2_1() << "\n";
    return 0;
}

