#pragma once
#ifndef MUSIC_INSTRUMENT_H
#define MUSIC_INSTRUMENT_H

#include <string>

class MusicalInstrument {
protected:
    std::string name;
    std::string type;

public:
    MusicalInstrument(std::string _name, std::string _type);
    virtual void playSound();
};

class Guitar : public MusicalInstrument {
private:
    int strings;
    std::string bodyMaterial;

public:
    Guitar(std::string _name, int _strings, std::string _bodyMaterial);
    void playSound() override;
};

class Trumpet : public MusicalInstrument {
private:
    std::string material;
    int valves;

public:
    Trumpet(std::string _name, std::string _material, int _valves);
    void playSound() override;
};

class Drums : public MusicalInstrument {
private:
    int drumCount;
    std::string drumType;

public:
    Drums(std::string _name, int _drumCount, std::string _drumType);
    void playSound() override;
};

#endif // MUSIC_INSTRUMENT_H
