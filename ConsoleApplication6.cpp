#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Rus");
    int chislo = 1;
    int chislo2 = 0;
    int chislo3 = 0;

    while (chislo != 0) {
        cout << "[ + ] Введите число: ";

        cin >> chislo;
        if (chislo != 0) {
            chislo3++;
            chislo2 += chislo;
        }

    }
    cout << "[ + ] Среднее арифметическое " << (chislo2 / chislo3) << endl;


    int _;
    cin >> _;

    return 0;

}
