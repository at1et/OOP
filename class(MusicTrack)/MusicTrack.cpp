#include <iostream>
#include "MusicTrack.h"

using namespace std;  // Используем пространство имен std

// Конструктор класса с параметрами
MusicTrack::MusicTrack(const string& title, const string& artist, double length, const string& album, const string& genre, int year)
    : title_(title), artist_(artist), length_(length), album_(album), genre_(genre), year_(year) {}

// Метод для вывода информации о треке
void MusicTrack::printTrackInfo() const {
    // Выводим информацию о треке
    cout << "Title: " << title_ << endl;    // Название трека
    cout << "Artist: " << artist_ << endl;  // Исполнитель
    cout << "Length: " << length_ << " minutes" << endl;  // Длительность трека
    cout << "Album: " << album_ << endl;    // Название альбома
    cout << "Genre: " << genre_ << endl;    // Жанр трека
    cout << "Year: " << year_ << endl;      // Год
}

// Геттеры и сеттеры для полей класса
string MusicTrack::getTitle() const {
    return title_;
}

void MusicTrack::setTitle(const string& title) {
    title_ = title;
}

string MusicTrack::getArtist() const {
    return artist_;
}

void MusicTrack::setArtist(const string& artist) {
    artist_ = artist;
}

double MusicTrack::getLength() const {
    return length_;
}

void MusicTrack::setLength(double length) {
    length_ = length;
}

string MusicTrack::getAlbum() const {
    return album_;
}

void MusicTrack::setAlbum(const string& album) {
    album_ = album;
}

string MusicTrack::getGenre() const {
    return genre_;
}

void MusicTrack::setGenre(const string& genre) {
    genre_ = genre;
}

int MusicTrack::getYear() const {
    return year_;
}

void MusicTrack::setYear(int year) {
    year_ = year;
}

