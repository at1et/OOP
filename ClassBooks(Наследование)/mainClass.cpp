#include <iostream>
#include <string>

using namespace std;

// Базовый класс MusicalInstrument
class MusicalInstrument {
protected:
    string name;
    string type;

public:
    // Конструктор с двумя параметрами для инициализации полей name и type
    MusicalInstrument(string _name, string _type) : name(_name), type(_type) {}

    // Виртуальная функция playSound для воспроизведения звука инструмента
    virtual void playSound() {
        cout << "Playing " << type << " " << name << "...\n";
    }
};

// Производный класс Guitar от MusicalInstrument
class Guitar : public MusicalInstrument {
private:
    int strings;
    string bodyMaterial; // Новое поле для хранения материала корпуса гитары

public:
    // Конструктор с тремя параметрами и инициализацией через список инициализации базового класса
    Guitar(string _name, int _strings, string _bodyMaterial) : MusicalInstrument(_name, "guitar"), strings(_strings), bodyMaterial(_bodyMaterial) {}

    // Переопределение метода playSound для вывода звука гитары с учетом количества струн и материала корпуса
    void playSound() override {
        cout << "Strumming " << strings << "-string " << bodyMaterial << " " << name << "...\n";
    }
};

// Производный класс Trumpet от MusicalInstrument
class Trumpet : public MusicalInstrument {
private:
    string material;
    int valves; // Новое поле для хранения количества клапанов у трубы

public:
    // Конструктор с тремя параметрами и инициализацией через список инициализации базового класса
    Trumpet(string _name, string _material, int _valves) : MusicalInstrument(_name, "trumpet"), material(_material), valves(_valves) {}

    // Переопределение метода playSound для вывода звука трубы с учетом материала и количества клапанов
    void playSound() override {
        cout << "Blowing " << material << " " << name << " with " << valves << " valves...\n";
    }
};

// Производный класс Drums от MusicalInstrument
class Drums : public MusicalInstrument {
private:
    int drumCount;
    string drumType; // Новое поле для хранения типа барабанов

public:
    // Конструктор с тремя параметрами и инициализацией через список инициализации базового класса
    Drums(string _name, int _drumCount, string _drumType) : MusicalInstrument(_name, "drums"), drumCount(_drumCount), drumType(_drumType) {}

    // Переопределение метода playSound для вывода звука барабанов с учетом количества и типа
    void playSound() override {
        cout << "Beating " << drumCount << " " << drumType << " " << name << "...\n";
    }
};

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
