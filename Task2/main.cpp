//Autor : Andrey Poluektov 
#include <iostream>
#include <cassert>
#include <vector>
#include "calcNum.h"

using namespace std;

int main()
{
    int n, x, absSum = 0;
    vector<double> num; // Используем вещественные числа вместо целых

    // Переменные для тестировки
    vector <double> test = { 1.5, 2.5, 3.5, 4.5, 5.5 }; // 17.5
    vector <double> test2 = { -1.5, 2.5, 3.5 };
    vector <double> test3 = { 1.5, 2.0, 3.5, -4.5, 5.0, -6.5, 7.5 };

    assert(abs(17 - calculateAbsSum(test)) < 0.1);
    assert(abs(4.5 - calculateAbsSum(test)) < 0.1);
    assert(abs(9.5 - calculateAbsSum(test)) < 0.1);


    cout << "Если вы хотите ввести значения из файла - нажмите 1" << endl
        << "Если вы хотите указать количество чисел и заполнить их случайными значениями - нажмите 0" << endl;
    cin >> x;
    switch (x)
    {
    case 0: 
    {
        cout << "Введите количество чисел: " << endl;
        cin >> n;
        num.resize(n);
        for (int i = 0; i < n; i++)
        {
            num[i] = randomNum();
            cout << "a" << i + 1 << " " << num[i] << endl;
        }

        absSum = calculateAbsSum(num);

        cout << "" << endl;
        cout << "Сумма всех элементов массива под модулем: " << absSum << endl;
        cout << "" << endl;

        string fileName;
        cout << "Введите имя файла для сохранения результатов: ";
        cin >> fileName;
        saveResultsToFile(num, absSum, fileName);
        break;
    }
    case 1:
    {
        string fileName;
        fileName = "numbers.txt";

        vector<double> arr;
        if (numFromFile(fileName.c_str(), arr))
        {
            cout << "Содержимое вектора из файла:" << endl;
            for (int i = 0; i < arr.size(); i++)
            {
                cout << "a" << i + 1 << " " << arr[i] << endl;
            }

            absSum = calculateAbsSum(arr);

            cout << "" << endl;
            cout << "Сумма всех элементов вектора под модулем: " << absSum << endl;
            cout << "" << endl;

            string fileName2;
            cout << "Введите имя файла для сохранения результатов: ";
            cin >> fileName2;
            saveResultsToFile(num, absSum, fileName2);
        }
        else
        {
            cout << "Произошла ошибка при чтении файла." << endl;
        }
        break;
    }
    default:
        cout << "Неправильный выбор" << endl;
    }

}
