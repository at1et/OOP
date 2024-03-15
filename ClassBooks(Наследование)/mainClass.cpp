#include <iostream>
#include "music_instrument.h"

int main() {
    // Создание объектов базового и производных классов
    MusicalInstrument instrument("Piano", "piano");
    Guitar guitar("Acoustic", 6, "wood");
    Trumpet trumpet("Brass Trumpet", "brass", 3);
    Drums drums("Electronic Drums", 8, "electronic");

    // Вызов метода playSound для каждого объекта
    instrument.playSound(); // Вывод: Playing piano Piano...
    guitar.playSound();     // Вывод: Strumming 6-string wood Acoustic...
    trumpet.playSound();    // Вывод: Blowing brass Brass Trumpet with 3 valves...
    drums.playSound();      // Вывод: Beating 8 electronic Electronic Drums...

    return 0;
}
