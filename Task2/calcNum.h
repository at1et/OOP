//Poluektov Andrey, VMK-22
#include <vector> // Добавьте эту строку для работы с векторами
using namespace std; // Добавьте эту строку для использования пространства имен std

// Процедура для сложения элементов массива и выведения их под модуль
int calculateAbsSum(const vector<int>& arr);
/**/

// Процедура для заполнения массива из файла и получения его длины
bool numFromFile(const char* filename, vector<int>& arr);

// Функция для записи результатов в файл
void saveResultsToFile(const vector<int>& data, int sum);