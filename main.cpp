#include <iostream>
#include "Calculator.h"
#include "History.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");
    History history;
    Calculator calc(history);
    history.load();
    while (true) {
        cout << endl;
        cout << "===== КАЛЬКУЛЯТОР =====" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Степень" << endl;
        cout << "6. Остаток от деления" << endl;
        cout << "7. История" << endl;
        cout << "8. Очистить историю" << endl;
        cout << "9. Выход" << endl;
        int num,a,b;
        double result;
        cin >> num;
        switch (num) {
        case 1:
            cout << "Введите числа:";
            cin >> a >> b;
            cout <<calc.add(a, b);
            break;

        case 2:
            cout << "Введите числа:";
            cin >> a >> b;
            cout <<calc.subtract(a, b);
            break;

        case 3:
            cout << "Введите числа:";
            cin >> a >> b;
            cout << calc.multiply(a, b);
            break;

        case 4:
            cout << "Введите числа:";
            cin >> a >> b;
            if (calc.divide(a, b, result)) {
                cout << result;
            }
            else cout << "На ноль делить нельзя!!!";
            break;

        case 5:
            cout << "Введите числа:";
            cin >> a >> b;
            cout << calc.power(a, b);
            break;

        case 6:
            cout << "Введите числа:";
            cin >> a >> b;
            int results;
            if (calc.modulo(a, b, results)) {
                cout << results;
            }
            else cout << "На ноль делить нельзя!!!";
            break;

        case 7:
            history.show();
            break;

        case 8:
            history.clear();
            break;

        case 9:
            history.save();
            break;
        default:
            cout << "Ошибка!";
        }
        if (num == 9) {
            break;
        }
        }
   
}
