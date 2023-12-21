#pragma once  // Директива предотвращает многократное включение заголовочного файла
#include <iostream>
#include <string>
#include <cassert>

using namespace std;  // Используем пространство имен std

/* MusicTrack представляет собой абстракцию музыкального трека,
содержащую информацию о его названии, исполнителе, длительности, альбоме, жанре и годе выпуска*/


class MusicTrack {
public:
    // Конструктор класса с параметрами
    MusicTrack(const string& title, const string& artist, double length, const string& album, const string& genre, int year);

    // Метод для вывода информации о треке
    void printTrackInfo() const;

    // Геттеры и сеттеры для полей класса
    string getTitle() const;   // Геттер для названия трека
    void setTitle(const string& title);  // Сеттер для названия трека

    string getArtist() const;  // Геттер для исполнителя
    void setArtist(const string& artist);  // Сеттер для исполнителя

    double getLength() const;  // Геттер для длительности трека
    void setLength(double length);  // Сеттер для длительности трека

    string getAlbum() const;  // Геттер для названия альбома
    void setAlbum(const string& album);  // Сеттер для названия альбома

    string getGenre() const;  // Геттер для жанра трека
    void setGenre(const string& genre);  // Сеттер для жанра трека

    int getYear() const;  // Геттер для года
    void setYear(int year);  // Сеттер для года

    double getLengthInSeconds() const;  // Дополнительный метод, возвращающий продолжительность в секундах

private:
    // Приватные поля класса
    string title_;    // Название трека
    string artist_;   // Имя исполнителя
    double length_;    // Длительность трека
    string album_;    // Название альбома
    string genre_;    // Жанр трека
    int year_;        // Год
};
void test() {
    MusicTrack myTrack("Song Title", "Artist Name", 3.5, "Album Name", "Pop", 2023);
    assert(title_ == "Song Title");
}
