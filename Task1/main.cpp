// autor: Poluektov Andrey VMK-22

#include <iostream> // Cодержит определения стандартных потоков ввода-вывода
#include <cassert> // Нужно для использования assert
#include <math.h> // библиотека математики
#include "calcF.h" // Подключение заголовочного файла, в котором содержится основная процедура для вычесления силы притяжения

using namespace std; // Использование стандартных библиотек 

int main() {
    
    // Русский язык 
    setlocale(LC_ALL, "Russian");

    // Объявление переменных
    double  n1, // масса первого тела
            n2, // масса второго тела
            r,  // расстояние между ними
            f,  // сила (финальный результат)

            // ниже значения используются для "ассертов", чтобы выявить ошибки в коде
            moon = 7.35e22, // масса луны ;
            distance_from_moon = 1737000.0; // расстояние от центра луны 
            const double test = 0.01; // допустимая погрешность 

    // Тестирование
    assert(abs(calculateF(70.0, moon, distance_from_moon) - 113.813) < test ); // Измерение силы притяжения между человеком массой 70 кг и луной
    assert(abs(calculateF(452423422.0, 234142133.0, 211.0) - 158.8) < test);
    assert(abs(calculateF(674332.0, 3242342.0, 1.0) - 145.928) < test);

    // Вывод и задание значений переменным 
    cout << "Введите массу 1-го тела:" << endl; // вывод текста в консоль
    cin >> n1; // получение данных для переменной путём ввода 
    cout << "Введите массу 2-го тела:" << endl;
    cin >> n2;
    cout << "Введите расстояние между двумя телами:" << endl;    
    cin >> r;

    // Решение задачи
    f = calculateF(n1,n2, r); 
    cout << "Сила притяжения между двумя телами: " << f << endl;

}