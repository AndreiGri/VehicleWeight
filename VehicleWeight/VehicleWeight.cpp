#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int weight1 = 0;
    int weight2 = 0;
    int weight3 = 0;
    int weight4 = 0;
    int const limit = 1200;

    cout << endl;
    cout << " Введите вес первого автомобиля: ";
    cin >> weight1;
    cout << " Введите вес второго автомобиля: ";
    cin >> weight2;
    cout << " Введите вес третьего автомобиля: ";
    cin >> weight3;
    cout << " Введите вес четвёртого автомобиля: ";
    cin >> weight4;

    if (weight1 > limit || weight2 > limit || weight3 > limit || weight4 > limit) {
        cout << " На весах есть как минимум одна машина с перегрузом!" << endl;
    }
    else {
        cout << " Все машины прошли весовой контроль!" << endl;
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}