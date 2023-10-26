#include <vector> // Добавьте эту строку для работы с векторами
#include <iostream>
#include <random>
#include <fstream>

using namespace std;

// Процедура для генерации случайных натуральных чисел в диапазоне от 1 до INT_MAX
int randomNum()
{
    random_device rd; // Создаём объект для генерации случайных чисел на основе аппаратных источников
    mt19937 gen(rd()); // Инициализируем генератор случайных чисел
    uniform_int_distribution<int> dis(1, INT_MAX); // Задаём диапазон от 1 до максимального INT
    return dis(gen); // Генерируем и возвращаем случайное число из указанного диапазона
}

// Процедура для сложения элементов массива и выведения их под модуль
// Процедура для вычисления модуля суммы элементов вектора
int calculateAbsSum(const vector<int>& arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return abs(sum);
}


// Процедура для заполнения вектора из файла
bool numFromFile(const char* filename, vector<int>& arr)
{
    ifstream inputFile(filename); // Открываем файл для чтения
    int num;

    if (!inputFile)
    {
        cerr << "Ошибка открытия файла." << endl;
        return false;
    }

    while (inputFile >> num)
    {
        arr.push_back(num); // Добавляем числа в вектор
    }
    inputFile.close(); // Закрытие файла

    return true;
}



