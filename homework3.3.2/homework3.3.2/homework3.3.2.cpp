#include <iostream>
#include <string>


class Counter {
private:
    int num;
    std::string val;
    char input;
public:
    Counter()
    {
        num = 0;
    }
    void set_num() {
        std::cout << "\nВведите начальное значение счетчика: ";
        std::cin >> num;
        this->num;
    }
    void inc() {
        num++;
    }
    void dec() {
        num--;
    }
    int get_num() {
        std::cout << num;
        return num;
    }
    
    void exit() {
        std::cout << "\nДо свидания!";
    }

    void com() {
        std::cout << "\nВведите команду ('+', '-', '=' или 'x'): ";
        std::cin >> input;
        while (input != 'х') {
            if (input == '+') {
                this->inc();
            }
            else if (input == '-') {
                this->dec();
            }
            else if (input == '=') {
                this->get_num();
            }
            else if (input == 'х') {
                this->exit();
            }
            this->com();
        }
    }

    void value() {
        std::cout << "Вы хотите указать начальное значение счестчика? Введите да или нет: ";
        std::cin >> val;
        if (val == "да") {
            this->set_num();
            this->com();
        }
        else if (val == "нет") {
            this->com();
        }
        else std::cout << "\nОшибка!";
    }
};



int main()
{
    system("chcp 1251");
    Counter count;
    count.value();
    return 0;
}

