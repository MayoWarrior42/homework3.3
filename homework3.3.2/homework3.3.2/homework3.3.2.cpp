#include <iostream>
#include <string>


class Counter {
private:
    int num;
public:
    Counter()
    {
        num = 1;
    }

    Counter(int num1) {
       num = num1;
    }


    void inc() {
        num++;
    }
    void dec() {
        num--;
    }
    int get_num() {
        return num;
    }
    



};

int main()
{
    system("chcp 1251");
    Counter count;
    char input = 'а';
    int num = 0;
    std::string val;
    std::cout << "Вы хотите указать начальное значение счестчика? Введите да или нет: ";
    std::cin >> val;
    if (val == "да") {
        std::cout << "\nВведите значение: " << "\n";
        std::cin >> num;
        Counter coun(num);
        count = coun;
    }



    while (input != 'х'){
    std::cout << "\nВведите команду ('+', '-', '=' или 'x'): ";
    std::cin >> input;
        if (input == '+') {
            count.inc();
        }
        else if (input == '-') {
            count.dec();
        }
        else if (input == '=') {
            std::cout << count.get_num();
        }
        else if (input == 'х') {
            std::cout << "\nДо свидания!";
        }

    }


    return 0;
}

