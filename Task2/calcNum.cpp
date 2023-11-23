#include <vector> // строка для работы с векторами
#include <iostream>
#include <random>
#include <fstream>

using namespace std;

// Процедура для генерации случайных чисел в диапазоне от -1000 до 1000
int randomNum()
{
    return rand() % 2000 - 1000; // Генерация случайного числа в диапазоне от -1000 до 1000
}


// Процедура для сложения элементов вектора и вычисления модуля суммы
int calculateAbsSum(const vector<double>& arr)
{
    double sum = 0; // Инициализируем переменную для хранения суммы элементов вектора
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i]; // Прибавляем текущий элемент к сумме
    }
    return abs(sum); // Возвращаем модуль суммы всех элементов вектора
}


// Процедура для заполнения вектора из файла
bool numFromFile(const char* filename, vector<double>& arr)
{
    ifstream inputFile(filename); // Создаем объект ifstream для чтения из файла с заданным именем
    double num;

    if (!inputFile) // Проверяем, успешно ли открыт файл для чтения
    {
        cerr << "Ошибка открытия файла." << endl; // Выводим сообщение об ошибке, если файл не удалось открыть
        return false; // Возвращаем false, чтобы указать на неудачное выполнение процедуры
    }

    // Считывание чисел из файла и добавление их в вектор
    while (inputFile >> num)
    {
        arr.push_back(num); // Добавляем считанное число в конец вектора
    }
    inputFile.close(); // Закрываем файл после считывания

    return true; // Возвращаем true, чтобы указать на успешное выполнение процедуры
}


// Процедура для записи результатов в файл
void saveResultsToFile(const vector<double>& data, int sum, const string& filename) {
    ofstream outFile(filename); // Создаем объект ofstream для записи в файл с заданным именем
    if (outFile.is_open()) { // Проверяем, успешно ли открыт файл для записи
        // Запись результатов в файл
        outFile << "Сумма всех элементов: " << sum << endl; // Записываем сумму в файл
        cout << "Results in : " << filename << endl; // Выводим сообщение о завершении записи в файл
    }
    else {
        cout << "Ошибка при открытии файла для записи." << endl; // Выводим сообщение об ошибке при открытии файла
    }
}




