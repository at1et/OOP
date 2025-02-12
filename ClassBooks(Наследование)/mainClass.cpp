#include <iostream>
#include <vector>
#include "music_instrument.h"

int main() {
    // Создание объектов через указатели на базовый класс
    std::vector<MusicalInstrument*> instruments;

    instruments.push_back(new Guitar("Acoustic", 6, "wood"));
    instruments.push_back(new Trumpet("Brass Trumpet", "brass", 3));
    instruments.push_back(new Drums("Electronic Drums", 8, "electronic"));

    // Полиморфный вызов методов
    for (auto* instrument : instruments) {
        instrument->playSound(); // Вызовется реализация соответствующего класса
    }

    // Освобождение памяти
    for (auto* instrument : instruments) {
        delete instrument;
    }

    return 0;
}
