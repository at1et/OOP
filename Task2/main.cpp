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
    double test[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    double test2[] = { 1.5, 2.5, 3.5 };
    double test3[] = { 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5 };



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
            num[i] = rand() % 200 - 100; // Генерация от -100 до 100
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
        cout << "Введите имя файла с числами: ";
        cin >> fileName;

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

            saveResultsToFile(num, absSum, fileName);
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
