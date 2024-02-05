#pragma once  // Директива предотвращает многократное включение заголовочного файла
#include <iostream>
#include <string>

using namespace std;  // Используем пространство имен std

/* MusicTrack представляет собой абстракцию музыкального трека,
содержащую информацию о его названии, исполнителе, длительности, альбоме, жанре и годе выпуска*/
class MusicTrack {
public:
    // Конструктор класса с параметрами
    MusicTrack(const string& title, const string& artist, double length, const string& album, const string& genre, int year);

    // Метод для вывода информации о треке
    void printTrackInfo() const; // const не меняет полей класса

    // Геттеры и сеттеры для полей класса

    // Геттер для названия трека
    string getTitle() const;   
    // Сеттер для названия трека
    void setTitle(const string& title);  

    // Геттер для исполнителя
    string getArtist() const;
    // Сеттер для исполнителя
    void setArtist(const string& artist);

    // Геттер для длительности трека
    double getLength() const;  
    // Сеттер для длительности трека
    void setLength(double length);  

    // Геттер для названия альбома
    string getAlbum() const; 
    // Сеттер для названия альбома
    void setAlbum(const string& album);  

    // Геттер для жанра трека
    string getGenre() const;
    // Сеттер для жанра трека
    void setGenre(const string& genre);  

    // Геттер для года
    int getYear() const;
    // Сеттер для года
    void setYear(int year);  

private:
    // Приватные поля класса
    string title_;    // Название трека
    string artist_;   // Имя исполнителя
    double length_;    // Длительность трека
    string album_;    // Название альбома
    string genre_;    // Жанр трека
    int year_;        // Год
};
