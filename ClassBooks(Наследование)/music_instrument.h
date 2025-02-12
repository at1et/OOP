#pragma once
#ifndef MUSIC_INSTRUMENT_H
#define MUSIC_INSTRUMENT_H

#include <string>

/**
 * @class MusicalInstrument
 * @brief Абстрактный базовый класс для всех музыкальных инструментов.
 *
 * Содержит общие свойства: название и тип инструмента.
 */
class MusicalInstrument {
protected:
    std::string name;
    std::string type;

public:
    MusicalInstrument(std::string _name, std::string _type);
    virtual void playSound() = 0; // Чисто виртуальный метод
};

/**
 * @class Guitar
 * @brief Класс, представляющий гитару.
 *
 * Наследует MusicalInstrument. Добавляет параметры: количество струн и материал корпуса.
 */
class Guitar : public MusicalInstrument {
private:
    int strings;
    std::string bodyMaterial;

public:
    Guitar(std::string _name, int _strings, std::string _bodyMaterial);
    void playSound() override;
};

/**
 * @class Trompete
 * @brief Класс, представляющий трубу.
 *
 * Наследует MusicalInstrument. Добавляет параметры: материал и количество клапанов.
 */
class Trumpet : public MusicalInstrument {
private:
    std::string material;
    int valves;

public:
    Trumpet(std::string _name, std::string _material, int _valves);
    void playSound() override;
};

/**
 * @class Drums
 * @brief Класс, представляющий барабаны.
 *
 * Наследует MusicalInstrument. Добавляет параметры: количество барабанов и их тип.
 */
class Drums : public MusicalInstrument {
private:
    int drumCount;
    std::string drumType;

public:
    Drums(std::string _name, int _drumCount, std::string _drumType);
    void playSound() override;
};

#endif // MUSIC_INSTRUMENT_H
