// autor: Poluektov Andrey VMK-22

#include <math.h> // "подключение" математики
// autor: Poluektov Andrey VMK-22
// Вычисляет силу притяжения между двумя телами в килограммах и использует для этого дистанцию в метрах
double calculateF(double n1, double n2, double distance) {
    double G = 6.6743e-11; // Гравитационная постоянная 
    double force = G * ((n1 * n2) / pow(distance, 2)); // Сила (финальный результат), умножаю грав. постоянную на массу 2-х тел разделённую на расстояние во второй степени
    return force; // Возвращение значения 
}
/**
 *n1 - масса первого тела в кг.
 *n2 - масса второго тела в кг.
 *distance - расстояние между телами в метрах.
 *
 * Возвращаяет силу притяжения
 */ 