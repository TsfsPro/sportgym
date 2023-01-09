#include <iostream>
using namespace std;
#include "constans.h"

//Функция вычисления высоты башни
double visiHlen(double timeUse) {
    double result = myConstans::my_gravity * (timeUse * timeUse) / 2;
    return result;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите высоту башни: " << endl;
    double heightTower = 0;
    cin >> heightTower;
    for (int i = 0; i <= 5; i++) {
        double vremTime = visiHlen(i);
        double heiBals = heightTower - vremTime;
        if (heiBals > 0) {
            cout << "\tСекунда:  " << i << "  высота мячика  " << heiBals << "  метров. " << endl;
        }
        else {
            cout << "\tМяч достиг земли" << endl;
        }
    }

}
