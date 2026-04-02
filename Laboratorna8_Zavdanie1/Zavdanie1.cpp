#include <iostream>
#include <fstream>  
#include <Windows.h> 
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream Fin("number.txt");
    if (!Fin) {
        cout << "Не вдалося відкрити файл numbers.txt" << endl;
        return 1;
    }

    int x;
    long long prod = 1;
    bool hasMultiple5 = false;

    for (int i = 0; i < 10; i++) {
        Fin >> x;
        if (x % 5 == 0) { 
            prod *= x;
            hasMultiple5 = true;
        }
    }

    Fin.close();

    if (hasMultiple5)
        cout << "Добуток чисел, кратних 5: " << prod << endl;
    else
        cout << "У файлі немає чисел, кратних 5." << endl;

    system("pause");
    return 0;
}