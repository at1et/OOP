#include "music_instrument.h"
#include <iostream>

// Реализация методов класса MusicalInstrument
MusicalInstrument::MusicalInstrument(std::string _name, std::string _type) : name(_name), type(_type) {}

void MusicalInstrument::playSound() {
    std::cout << "Playing " << type << " " << name << "...\n";
}

// Реализация методов класса Guitar
Guitar::Guitar(std::string _name, int _strings, std::string _bodyMaterial) : MusicalInstrument(_name, "guitar"), strings(_strings), bodyMaterial(_bodyMaterial) {}

void Guitar::playSound() {
    std::cout << "Strumming " << strings << "-string " << bodyMaterial << " " << name << "...\n";
}

// Реализация методов класса Trumpet
Trumpet::Trumpet(std::string _name, std::string _material, int _valves) : MusicalInstrument(_name, "trumpet"), material(_material), valves(_valves) {}

void Trumpet::playSound() {
    std::cout << "Blowing " << material << " " << name << " with " << valves << " valves...\n";
}

// Реализация методов класса Drums
Drums::Drums(std::string _name, int _drumCount, std::string _drumType) : MusicalInstrument(_name, "drums"), drumCount(_drumCount), drumType(_drumType) {}

void Drums::playSound() {
    std::cout << "Beating " << drumCount << " " << drumType << " " << name << "...\n";
}
