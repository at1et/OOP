//AUTOR: ANDREY POLUEKTOV VMK-22
#include <iostream>
#include <cassert>
#include <vector>
#include <random>
#include "calcNum.h"

using namespace std;

int main()
{
    int n; // объявление переменной для длины массива
    int x; // переменная для выбора способа ввода элементов
    int absSum = 0; // объявление переменной для работы с суммой и модулем

    // Переменные для тестировки
    int test[] = { 1, 5, 4, 3, 2 };
    int test2[] = { 1, 5, 4 };
    int test3[] = { 1, 5, 4, 3, 2, 6, 2 };

    // Проверка
    assert(calculateAbsSum(vector<int>(test, test + 5)) == 15);
    assert(calculateAbsSum(vector<int>(test2, test2 + 3)) == 10);
    assert(calculateAbsSum(vector<int>(test3, test3 + 7)) == 23);

    vector<int> num(n); // Создание вектора


    cout << "Если вы хотите ввести значения из файла - нажмите 1" << endl << "Если вы хотите заполнить их случайно - нажмите 0" << endl;
    cin >> x;
    switch (x)
    {
    case 0: //Для ввода кол-ва чисел вручную и заполние их рандомными значениями
    {
        cout << "Введите количество чисел: " << endl;
    	cin >> n;	
    	num.resize(n);
        for (int i = 0; i < n; i++)
        {
           	num[i] = rand(); // генерация от 1 до INT_MAX
            cout << "a" << i + 1 << " " << num[i] << endl; // выводим число
        }
		
        absSum = calculateAbsSum(num);

        cout << "" << endl;
        cout << "Сумма всех элементов массива под модулем: " << absSum << endl;
        cout << "" << endl;
        saveResultsToFile(num, absSum);
        break;
     }
    case 1: //Для ввода чисел из файла
    {
        const char* filename = "numbers.txt";
        vector<int> arr;

        if (numFromFile(filename, arr))
        {
            // Выводим содержимое вектора из файла
            cout << "Содержимое вектора из файла:" << endl;
            for (int i = 0; i < arr.size(); i++)
            {
                cout << "a" << i + 1 << " " << arr[i] << endl;
            }

            absSum = calculateAbsSum(arr);

            cout << "" << endl;
            cout << "Сумма всех элементов вектора под модулем: " << absSum << endl;
            cout << "" << endl;
            saveResultsToFile(num, absSum);
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

    return 0;
}
