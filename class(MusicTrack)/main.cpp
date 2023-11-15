#include <iostream>  // Подключение библиотеки для ввода/вывода через консоль
#include <string>    // Подключение библиотеки для работы со строками

using namespace std;  // Использование пространства имен std

// Объявление класса MusicTrack
class MusicTrack {
public:
    // Конструктор класса с параметрами
    MusicTrack(string title, string artist, double length, string album, string genre)
        : title_(title), artist_(artist), length_(length), album_(album), genre_(genre) {}

    // Метод для вывода информации о треке
    void printTrackInfo() const {
        cout << "Title: " << title_ << endl;    // Вывод названия трека
        cout << "Artist: " << artist_ << endl;  // Вывод исполнителя
        cout << "Length: " << length_ << " minutes" << endl;  // Вывод длительности трека
        cout << "Album: " << album_ << endl;    // Вывод названия альбома
        cout << "Genre: " << genre_ << endl;    // Вывод жанра трека
    }

private:
    // Приватные поля класса
    string title_;    // Название трека
    string artist_;   // Имя исполнителя
    double length_;    // Длительность трека
    string album_;    // Название альбома
    string genre_;    // Жанр трека
};

// Главная функция программы
int main() {
    // Создание экземпляра класса MusicTrack с заданными параметрами
    MusicTrack myTrack("Song Title", "Artist Name", 3.5, "Album Name", "Pop");

    // Вызов метода для вывода информации о треке
    myTrack.printTrackInfo();
}
